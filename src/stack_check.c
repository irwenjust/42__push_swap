/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:21:14 by likong            #+#    #+#             */
/*   Updated: 2024/07/16 11:04:07 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	find_inside(t_stack *stack, int num)
{
	int steps;

	steps = 0;
	while (stack && stack->num != num)
	{
		stack = stack->next;
		steps++;
	}
	return (steps);
}

int	find_pos_b(t_stack *b, int num)
{
	int		i;
	t_stack *res;

	i = 1;
	if (num > b->num && num < lst_last(b)->num)
		i = 0;
	else if (num < min(b) || num > max(b))
		i = find_inside(b, max(b));
	else
	{
		//one place could change
		res = b->next;
		while (b->num < num || res->num > num)
		{
			b = b->next;
			res = res->next;
			i++;
		}
	}
	return (i);
}
