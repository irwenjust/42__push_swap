/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:20:06 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:07 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	lst_clear(t_stack **lst)
{
	t_stack	*res;

	if (!lst)
		return ;
	while (*lst)
	{
		res = (*lst)->next;
		(*lst)->num = 0;
		free(*lst);
		*lst = res;
	}
}
