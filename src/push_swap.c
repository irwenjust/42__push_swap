/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:55:17 by likong            #+#    #+#             */
/*   Updated: 2024/07/18 14:57:01 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static t_stack	**push_sort_a(t_stack **a, t_stack **b, t_recorder *r)
{
	int		steps;
	t_stack	*res;

	while (*b)
	{
		res = *b;
		steps = cal_steps_ba(*a, *b);
		while (steps >= 0)
		{
			if (steps == if_rrarrb(*a, *b, res->num, 'b'))
			{
				ft_printf("test1\n");
				steps = go_rrbrra(a, b, res->num, r);
			}
			else if (steps == if_rarb(*a, *b, res->num, 'b'))
			{
				ft_printf("test2\n");
				steps = go_rbra(a, b, res->num, r);
			}
			else if (steps == if_rrarb(*a, *b, res->num, 'b'))
			{
				ft_printf("test3\n");
				steps = go_rbrra(a, b, res->num, r);
			}
			else if (steps == if_rarrb(*a, *b, res->num, 'b'))
			{
				ft_printf("test4\n");
				steps = go_rrbra(a, b, res->num, r);
			}
			else
				res = res->next;
		}
	}
	return (a);
}

static void	push_until_3_left(t_stack **a, t_stack **b, t_recorder *r)
{
	int		steps;
	t_stack	*res;

	res = NULL;
	while (lst_size(*a) > 3 && !a_has_sort(*a))
	{
		res = *a;
		steps = cal_steps_ab(*a, *b);
		while (steps >= 0)
		{
			if (steps == if_rarb(*a, *b, res->num, 'a'))
				steps = go_rarb(a, b, res->num, r);
			else if (steps == if_rrarb(*a, *b, res->num, 'a'))
				steps = go_rrarb(a, b, res->num, r);
			else if (steps == if_rarrb(*a, *b, res->num, 'a'))
				steps = go_rarrb(a, b, res->num, r);
			else if (steps == if_rrarrb(*a, *b, res->num, 'a'))
				steps = go_rrarrb(a, b, res->num, r);
			else
				res = res->next;
		}
	}
}

static t_stack	*push_sort_b(t_stack **a, t_recorder *r)
{
	t_stack	*b;

	b = NULL;
	if (lst_size(*a) > 3 && !a_has_sort(*a))
		push_b(a, &b, r);
	if (lst_size(*a) > 3 && !a_has_sort(*a))
		push_b(a, &b, r);
	if (lst_size(*a) > 3 && !a_has_sort(*a))
		push_until_3_left(a, &b, r);
	if (!a_has_sort(*a))
		sort_3_number(a, r);
	return (b);
}

void	push_swap(t_stack **a, t_stack **b, t_recorder *r)
{
	int	steps;

	if (r->nums == 0 || r->nums == 1)
		return ;
	else if (r->nums == 2)
		swap_a(a, r);
	else
	{
		*b = push_sort_b(a, r);
		a = push_sort_a(a, b, r);
		steps = find_inside(*a, min(*a));
		if (steps < lst_size(*a) - steps)
		{
			while ((*a)->num != min(*a))
				rotate_a(a, r);
		}
		else
		{
			while ((*a)->num != min(*a))
				rrotate_a(a, r);
		}
	}
}
