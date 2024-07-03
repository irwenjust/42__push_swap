/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:54:17 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 18:02:24 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	lst_add_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		(*lst)->prev = new;
		*lst = new;
	}
}
