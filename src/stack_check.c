/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:21:14 by likong            #+#    #+#             */
/*   Updated: 2024/07/15 18:18:42 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	find_place(t_stack *stack, int num)
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

int	find_place_b(t_stack *b, int num)
{
	int	i;
}
