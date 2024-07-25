/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:09:15 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:22:24 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../lib/push_swap_bonus.h"

void	lst_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = lst_last(*lst);
		last->next = new;
	}
}
