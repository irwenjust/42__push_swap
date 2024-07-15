/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:08:07 by likong            #+#    #+#             */
/*   Updated: 2024/07/15 18:16:36 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	if_rarb(t_stack *a, t_stack *b, int num)
{
	int steps;

	steps = find_place_b(b, num);
	if (steps < find_place(a, num))
		steps = find_place_b(a, num);
	return (num);
}
