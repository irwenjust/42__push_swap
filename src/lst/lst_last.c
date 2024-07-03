/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:52:29 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 18:02:31 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

t_stack	*lst_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
