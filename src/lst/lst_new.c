/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:28:49 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 17:38:34 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

t_stack	*lst_new(int num)
{
	t_stack	*new_list;

	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (!new_list)
		return (NULL);
	new_list->num = num;
	new_list->next = NULL;
	new_list->prev = NULL;
	return (new_list);
}
