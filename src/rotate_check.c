/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:08:07 by likong            #+#    #+#             */
/*   Updated: 2024/07/19 08:52:09 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	if_rrarrb(t_stack *a, t_stack *b, int num, char current)
{
	int	steps;

	steps = 0;
	if (current == 'a')
	{
		if (find_pos_b(b, num))
			steps = lst_size(b) - find_pos_b(b, num);
		if (find_inside(a, num) && steps < (lst_size(a) - find_inside(a, num)))
			steps = lst_size(a) - find_inside(a, num);
	}
	else if (current == 'b')
	{
		if (find_pos_a(a, num))
			steps = lst_size(a) - find_pos_a(a, num);
		if (find_inside(b, num) && steps < (lst_size(b) - find_inside(b, num)))
			steps = lst_size(b) - find_inside(b, num);
	}
	return (steps);
}

int	if_rrarb(t_stack *a, t_stack *b, int num, char current)
{
	int	steps;

	steps = 0;
	if (current == 'a')
	{
		if (find_inside(a, num))
			steps = lst_size(a) - find_inside(a, num);
		steps += find_pos_b(b, num);
	}
	else if (current == 'b')
	{
		if (find_pos_a(a, num))
			steps = lst_size(a) - find_pos_a(a, num);
		steps += find_inside(b, num);
	}
	return (steps);
}

int	if_rarrb(t_stack *a, t_stack *b, int num, char current)
{
	int	steps;

	steps = 0;
	if (current == 'a')
	{
		if (find_pos_b(b, num))
			steps = lst_size(b) - find_pos_b(b, num);
		steps += find_inside(a, num);
	}
	else if (current == 'b')
	{
		if (find_inside(b, num))
			steps = lst_size(b) - find_inside(b, num);
		steps += find_pos_a(a, num);
	}
	return (steps);
}

int	if_rarb(t_stack *a, t_stack *b, int num, char current)
{
	int	steps;

	steps = 0;
	if (current == 'a')
	{
		steps = find_pos_b(b, num);
		if (steps < find_inside(a, num))
			steps = find_inside(a, num);
	}
	else if (current == 'b')
	{
		steps = find_pos_a(a, num);
		if (steps < find_inside(b, num))
			steps = find_inside(b, num);
	}
	return (steps);
}
