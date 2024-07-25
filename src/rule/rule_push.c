/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:29:18 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:55 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	push_a(t_stack **a, t_stack **b, t_recorder *r)
{
	t_stack	*res;

	if (!(*b))
		return ;
	res = (*a);
	(*a) = (*b);
	(*b) = (*b)->next;
	(*a)->next = res;
	r->steps++;
	ft_printf("pa\n");
}

void	push_b(t_stack **a, t_stack **b, t_recorder *r)
{
	t_stack	*res;

	if (!(*a))
		return ;
	res = (*b);
	(*b) = (*a);
	(*a) = (*a)->next;
	(*b)->next = res;
	r->steps++;
	ft_printf("pb\n");
}
