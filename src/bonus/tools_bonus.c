/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:59:42 by likong            #+#    #+#             */
/*   Updated: 2024/07/18 09:16:05 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap_bonus.h"

void	ft_exit(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	delete_stack(t_stack *stack)
{
	if (!stack)
		return ;
	lst_clear(&stack);
}

void	free_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

void	free_sum(int *str, char **strs)
{
	if (str)
		free(str);
	if (strs)
		free_strs(strs);
	ft_exit();
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
