/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:52:43 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:21 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

void	swap_a(t_stack **s)
{
	t_stack	*res;

	if (!(*s) || !((*s)->next))
		return ;
	res = *s;
	*s = (*s)->next;
	res->next = (*s)->next;
	(*s)->next = res;
}

void	swap_b(t_stack **s)
{
	t_stack	*res;

	if (!(*s) || !((*s)->next))
		return ;
	res = *s;
	*s = (*s)->next;
	res->next = (*s)->next;
	(*s)->next = res;
}

void	swap_ss(t_stack **a, t_stack **b)
{
	t_stack	*res;

	if (!(*a) || !((*a)->next) || !(*b) || !((*b)->next))
		return ;
	res = *a;
	*a = (*a)->next;
	res->next = (*a)->next;
	(*a)->next = res;
	res = *b;
	*b = (*b)->next;
	res->next = (*b)->next;
	(*b)->next = res;
}
