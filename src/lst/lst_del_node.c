/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:19:29 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 18:23:36 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	lst_del_node(t_stack **lst)
{
	t_stack	*res;

	if (!lst || !*lst)
		return ;
	res = *lst;
	(*lst) = res->next;
	(*lst)->prev = NULL;
	free(res);
}
