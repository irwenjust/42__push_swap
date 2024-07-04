/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:55:17 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 20:31:17 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	push_swap(t_stack **a, t_stack **b)
{
	//swap_a(stack);
	ft_printf("before: %d\n", (*a)->num);
	// push_b(a, b);
	// push_a(a, b);
	(void)b;
	//rotate_a(a);
	rrotate_a(a);
	ft_printf("after: %d, last: %d\n", (*a)->num, lst_last(*a)->num);
	//ft_printf("a: %d, b: %d\n", (*stack)->num, (*b)->num);
}
