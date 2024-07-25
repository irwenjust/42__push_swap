/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rotate_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:58:27 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:18 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

void	rotate_a(t_stack **a)
{
	t_stack	*res;

	if (!(*a) || !(*a)->next)
		return ;
	res = (*a);
	(*a) = lst_last(*a);
	(*a)->next = res;
	(*a) = res->next;
	res->next = NULL;
}

void	rotate_b(t_stack **b)
{
	t_stack	*res;

	if (!(*b) || !(*b)->next)
		return ;
	res = (*b);
	(*b) = lst_last(*b);
	(*b)->next = res;
	(*b) = res->next;
	res->next = NULL;
}

void	rotate_rr(t_stack **a, t_stack **b)
{
	t_stack	*res;

	if (!(*a) || !(*a)->next || !(*b) || !(*b)->next)
		return ;
	res = (*a);
	(*a) = lst_last(*a);
	(*a)->next = res;
	(*a) = res->next;
	res->next = NULL;
	res = (*b);
	(*b) = lst_last(*b);
	(*b)->next = res;
	(*b) = res->next;
	res->next = NULL;
}
