/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:26:27 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:26 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

t_stack	*lst_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
