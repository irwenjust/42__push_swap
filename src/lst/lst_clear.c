/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:01:51 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 18:31:48 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	lst_clear(t_stack **lst, void (*del)(int *))
{
	t_stack	*res;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		res = *lst;
		*lst = (*lst)->next;
		free(res);
	}
}
