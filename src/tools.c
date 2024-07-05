/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:03:44 by likong            #+#    #+#             */
/*   Updated: 2024/07/05 15:50:53 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

bool	a_has_sort(t_stack *a)
{
	int res;

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
	int res;

	res = s->num;
	while (s->next)
	{
		if (res > s->next->num)
			res = s->next->num;
		s = s->next;
	}
	return (res);
}

int max(t_stack *s)
{
	int res;

	res = s->num;
	while (s->next)
	{
		if (res < s->next->num)
			res = s->next->num;
		s = s->next;
	}
	return (res);
}
