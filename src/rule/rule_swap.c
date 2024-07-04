/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:52:43 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 20:50:21 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	swap_a(t_stack **s)
{
	t_stack	*res;

	if (!(*s) || !((*s)->next))
		return ;
	res = *s;
	*s = (*s)->next;
	res->next = (*s)->next;
	(*s)->next = res;
	ft_printf("sa\n");
	ft_printf("now: %d, next: %d\n", (*s)->num, (*s)->next->num);
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
	ft_printf("sb\n");
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
	ft_printf("ss\n");
}
