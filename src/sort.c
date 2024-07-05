/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:41:14 by likong            #+#    #+#             */
/*   Updated: 2024/07/05 15:50:51 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	sort_3_number(t_stack **a, t_recorder *r)
{
	if (max(*a) == (*a)->num)
	{
		rotate_a(a, r);
		if (!(a_has_sort(*a)))
			swap_a(a, r);
	}
	else if (min(*a) == (*a)->num)
	{
		rrotate_a(a, r);
		swap_a(a, r);
	}
	else
	{
		if (min(*a) == lst_last(*a)->num)
			rrotate_a(a, r);
		else
			swap_a(a, r);
	}
}
