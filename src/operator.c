/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:06:12 by likong            #+#    #+#             */
/*   Updated: 2024/07/16 12:08:15 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int go_rrarrb(t_stack **a, t_stack **b, int num, char stack, t_recorder *r)
{
    if (stack == 'a')
    {
        while ((*a)->num != num && find_pos_b(*b, num) > 0)
            rrotate_rr(a, b, 0);
        while ((*a)->num != num)
            rrotate_a(a, r);
        while (find_pos_b(*b, num) > 0)
            rrotate_b(b, 0);
        push_b(a, b, 0);
    }
    else
    {}
    return (-1);
}

int go_rarrb(t_stack **a, t_stack **b, int num, char stack, t_recorder *r)
{
    if (stack == 'a')
    {
        while ((*a)->num != num)
            rotate_a(a, r);
        while (find_pos_b(*b, num) > 0)
            rrotate_b(b, r);
        push_b(a, b, r);
    }
    else
    {}
    return (-1);
}

int go_rrarb(t_stack **a, t_stack **b, int num, char stack, t_recorder *r)
{
    if (stack == 'a')
    {
        while ((*a)->num != num)
            rrotate_a(a, r);
        while (find_pos_b(*b, num) > 0)
            rotate_b(b, r);
        push_b(a, b, r);
    }
    else
    {}
    return (-1);
}

int	go_rarb(t_stack **a, t_stack **b, int num, char stack, t_recorder *r)
{
	if (stack == 'a')
    {
        while ((*a)->num != num && find_pos_b(*b, num))
            rotate_rr(a, b, r);
        while ((*a)->num != num)
            rotate_a(a, r);
        while (find_pos_b(*b, num) > 0)
            rotate_b;
        push_b(a, b, r);
    }
    else
    {}
    return (-1);
}
