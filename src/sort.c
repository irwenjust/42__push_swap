/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:41:14 by likong            #+#    #+#             */
/*   Updated: 2024/07/19 08:51:26 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	cal_steps_ba(t_stack *a, t_stack *b)
{
	int		steps;
	t_stack	*res;

	res = b;
	steps = if_rarb(a, b, b->num, 'b');
	while (res)
	{
		if (steps > if_rarb(a, b, res->num, 'b'))
			steps = if_rarb(a, b, res->num, 'b');
		if (steps > if_rrarb(a, b, res->num, 'b'))
			steps = if_rrarb(a, b, res->num, 'b');
		if (steps > if_rarrb(a, b, res->num, 'b'))
			steps = if_rarrb(a, b, res->num, 'b');
		if (steps > if_rrarrb(a, b, res->num, 'b'))
			steps = if_rrarrb(a, b, res->num, 'b');
		res = res->next;
	}
	return (steps);
}

int	cal_steps_ab(t_stack *a, t_stack *b)
{
	int		steps;
	t_stack	*res;

	res = a;
	steps = if_rarb(a, b, a->num, 'a');
	while (res)
	{
		if (steps > if_rarb(a, b, res->num, 'a'))
			steps = if_rarb(a, b, res->num, 'a');
		if (steps > if_rrarb(a, b, res->num, 'a'))
			steps = if_rrarb(a, b, res->num, 'a');
		if (steps > if_rarrb(a, b, res->num, 'a'))
			steps = if_rarrb(a, b, res->num, 'a');
		if (steps > if_rrarrb(a, b, res->num, 'a'))
			steps = if_rrarrb(a, b, res->num, 'a');
		res = res->next;
	}
	return (steps);
}

void	sort_3_number(t_stack **a, t_recorder *r)
{
	if (max(*a) == (*a)->num)
	{
		rotate_a(a, r);
		if (!(a_has_sort(*a)))
			swap_a(a, r);
	}
	else if (min(*a) == (*a)->num)
	{
		rrotate_a(a, r);
		swap_a(a, r);
	}
	else
	{
		if (min(*a) == lst_last(*a)->num)
			rrotate_a(a, r);
		else
			swap_a(a, r);
	}
}
