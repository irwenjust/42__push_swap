/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:02:27 by likong            #+#    #+#             */
/*   Updated: 2024/07/18 14:20:00 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

t_stack	*lst_new(int content)
{
	t_stack	*new_list;

	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (!new_list)
		ft_exit();
	new_list->num = content;
	new_list->next = NULL;
	return (new_list);
}
