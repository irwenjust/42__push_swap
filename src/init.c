/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:05:31 by likong            #+#    #+#             */
/*   Updated: 2024/07/05 15:50:48 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	init_recorder(t_recorder *r)
{
	r->nums = 0;
	r->steps = 0;
}

t_stack	*init_stack(int argc, char **argv, t_recorder *r)
{
	int		i;
	int		num;
	t_stack	*a;

	i = 1;
	a = NULL;
	while (i < argc)
	{
		num = (int)ft_long_atoi(argv[i]);
		lst_add_back(&a, lst_new(num));
		r->nums++;
		i++;
	}
	return (a);
}
