/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:33:29 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:21 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap_bonus.h"

t_stack	*init_stack(int argc, char **argv)
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
		}
		free_strs(res);
		i++;
	}
	return (a);
}
