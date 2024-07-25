/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:21:14 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:44 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	find_inside(t_stack *stack, int num)
{
	int	steps;

	steps = 0;
	while (stack && stack->num != num)
	{
		stack = stack->next;
		steps++;
	}
	return (steps);
}

int	find_pos_a(t_stack *a, int num)
{
	int		steps;
	t_stack	*res;

	steps = 1;
	if (num < a->num && num > lst_last(a)->num)
		steps = 0;
	else if (num < min(a) || num > max(a))
		steps = find_inside(a, min(a));
	else
	{
		res = a->next;
		while ((a->num > num || res->num < num) && res->next)
		{
			a = a->next;
			res = res->next;
			steps++;
		}
	}
	return (steps);
}

int	find_pos_b(t_stack *b, int num)
{
	int		steps;
	t_stack	*res;

	steps = 1;
	if (num > b->num && num < lst_last(b)->num)
		steps = 0;
	else if (num < min(b) || num > max(b))
		steps = find_inside(b, max(b));
	else
	{
		res = b->next;
		while (b->num < num || res->num > num)
		{
			b = b->next;
			res = res->next;
			steps++;
		}
	}
	return (steps);
}
