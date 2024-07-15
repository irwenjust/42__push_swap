/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:55:17 by likong            #+#    #+#             */
/*   Updated: 2024/07/15 16:08:39 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	push_until_3_left(t_stack **a, t_stack **b, t_recorder *r)
{
	int		steps;
	t_stack	*res;

	while (lst_size(res) > 3 && !a_has_sort(res))
	{
		res = *a;
		steps = cal_steps_ab(a, b);
		while (steps > 0)
		{}
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
	if (r->nums == 0 || r->nums == 1)
		return ;
	else if (r->nums == 2)
		swap_a(a, r);
	else
	{
		*b = push_sort_b(a, r);
	}
	ft_printf("Steps: %d\n", r->steps);
	(void)b;
	// ft_printf("after: %d, last: %d\n", (*a)->num, lst_last(*a)->num);
	// //ft_printf("a: %d, b: %d\n", (*stack)->num, (*b)->num);
}
