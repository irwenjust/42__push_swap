/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:27:54 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:28 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

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
