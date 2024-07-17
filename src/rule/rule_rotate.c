/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:58:27 by likong            #+#    #+#             */
/*   Updated: 2024/07/17 15:54:18 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	rotate_a(t_stack **a, t_recorder *r)
{
	t_stack	*res;

	if (!(*a) || !(*a)->next)
		return ;
	res = (*a);
	(*a) = lst_last(*a);
	(*a)->next = res;
	(*a) = res->next;
	res->next = NULL;
	r->steps++;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b, t_recorder *r)
{
	t_stack	*res;

	if (!(*b) || !(*b)->next)
		return ;
	res = (*b);
	(*b) = lst_last(*b);
	(*b)->next = res;
	(*b) = res->next;
	res->next = NULL;
	r->steps++;
	ft_printf("rb\n");
}

void	rotate_rr(t_stack **a, t_stack **b, t_recorder *r)
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
	r->steps++;
	ft_printf("rr\n");
}
