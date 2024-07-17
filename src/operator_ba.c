/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_ba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:29:41 by likong            #+#    #+#             */
/*   Updated: 2024/07/17 19:20:45 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	go_rrbrra(t_stack **a, t_stack **b, int num, t_recorder *r)
{
	while ((*b)->num != num && find_pos_a(*a, num) > 0)
		rrotate_rr(a, b, r);
	while ((*b)->num != num)
		rrotate_b(b, r);
	while (find_pos_a(*a, num) > 0)
		rrotate_a(a, r);
	push_a(a, b, r);
	return (-1);
}

int	go_rrbra(t_stack **a, t_stack **b, int num, t_recorder *r)
{
	while ((*b)->num != num)
		rotate_b(b, r);
	while (find_pos_a(*a, num) > 0)
		rrotate_a(a, r);
	push_a(a, b, r);
	return (-1);
}

int	go_rbrra(t_stack **a, t_stack **b, int num, t_recorder *r)
{
	while ((*b)->num != num)
		rrotate_b(b, r);
	while (find_pos_a(*a, num) > 0)
		rotate_a(a, r);
	push_a(a, b, r);
	return (-1);
}

int	go_rbra(t_stack **a, t_stack **b, int num, t_recorder *r)
{
	while ((*b)->num != num && find_pos_a(*a, num))
		rotate_rr(a, b, r);
	while ((*b)->num != num)
		rotate_b(b, r);
	while (find_pos_a(*a, num) > 0)
		rotate_a(a, r);
	push_a(a, b, r);
	return (-1);
}
