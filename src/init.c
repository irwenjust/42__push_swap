/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:05:31 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 19:25:16 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

t_stack	*init_stack(int argc, char **argv)
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
		i++;
	}
	return (a);
}
