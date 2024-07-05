/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:55:17 by likong            #+#    #+#             */
/*   Updated: 2024/07/05 15:50:50 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	push_swap(t_stack **a, t_stack **b, t_recorder *r)
{
	if (r->nums == 0 || r->nums == 1)
		return ;
	else if (r->nums == 2)
		swap_a(a, r);
	else if (r->nums == 3)
		sort_3_number(a, r);
	ft_printf("Steps: %d\n", r->steps);
	(void)b;
	// ft_printf("after: %d, last: %d\n", (*a)->num, lst_last(*a)->num);
	// //ft_printf("a: %d, b: %d\n", (*stack)->num, (*b)->num);
}
