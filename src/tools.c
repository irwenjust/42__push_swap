/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:03:44 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:46 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	print_stack(t_stack *stack, char c)
{
	while (stack)
	{
		ft_printf("%c: %d\n", c, stack->num);
		stack = stack->next;
	}
}

bool	a_has_sort(t_stack *a)
{
	int	res;

	res = a->num;
	while (a->next)
	{
		if (res > a->next->num)
			return (false);
		res = a->next->num;
		a = a->next;
	}
	return (true);
}

int	min(t_stack *s)
{
	int	res;

	res = s->num;
	while (s->next)
	{
		if (res > s->next->num)
			res = s->next->num;
		s = s->next;
	}
	return (res);
}

int	max(t_stack *s)
{
	int	res;

	res = s->num;
	while (s->next)
	{
		if (res < s->next->num)
			res = s->next->num;
		s = s->next;
	}
	return (res);
}
