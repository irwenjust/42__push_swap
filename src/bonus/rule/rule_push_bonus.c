/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_push_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:29:18 by likong            #+#    #+#             */
/*   Updated: 2024/07/18 09:52:09 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*res;

	if (!(*b))
		return ;
	res = (*a);
	(*a) = (*b);
	(*b) = (*b)->next;
	(*a)->next = res;
}

void	push_b(t_stack **a, t_stack **b)
{
	t_stack	*res;

	if (!(*a))
		return ;
	res = (*b);
	(*b) = (*a);
	(*a) = (*a)->next;
	(*b)->next = res;
}
