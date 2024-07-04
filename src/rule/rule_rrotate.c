/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:20:40 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 20:50:22 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	rrotate_a(t_stack **a)
{
	t_stack	*res;

	if (!(*a) || !(*a)->next)
		return ;
	res = (*a);
	while ((*a)->next != NULL)
		(*a) = (*a)->next;
	(*a)->next = res;
	while (res->next->num != (*a)->num)
		res = res->next;
	res->next = NULL;
	ft_printf("rra\n");
}

void	rrotate_b(t_stack **b)
{
	t_stack	*res;

	if (!(*b) || !(*b)->next)
		return ;
	res = (*b);
	while ((*b)->next != NULL)
		(*b) = (*b)->next;
	(*b)->next = res;
	while (res->next->num != (*b)->num)
		res = res->next;
	res->next = NULL;
	ft_printf("rrb\n");
}

void	rrotate_rr(t_stack **a, t_stack **b)
{
	t_stack	*res;

	if (!(*a) || !(*a)->next)
		return ;
	res = (*a);
	while ((*a)->next != NULL)
		(*a) = (*a)->next;
	(*a)->next = res;
	while (res->next->num != (*a)->num)
		res = res->next;
	res->next = NULL;
	res = (*b);
	while ((*b)->next != NULL)
		(*b) = (*b)->next;
	(*b)->next = res;
	while (res->next->num != (*b)->num)
		res = res->next;
	res->next = NULL;
	ft_printf("rrr\n");
}
