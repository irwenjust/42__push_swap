/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rrotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:20:40 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:19 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

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
}
