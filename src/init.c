/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:05:31 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:31 by likong           ###   ########.fr       */
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
	int		j;
	int		num;
	t_stack	*a;
	char	**res;

	i = 1;
	a = NULL;
	while (i < argc)
	{
		res = ft_split(argv[i], ' ');
		if (!res)
			ft_exit();
		j = -1;
		while (res[++j])
		{
			num = (int)ft_long_atoi(res[j]);
			lst_add_back(&a, lst_new(num));
			r->nums++;
		}
		free_strs(res);
		i++;
	}
	return (a);
}
