/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:16:36 by likong            #+#    #+#             */
/*   Updated: 2024/07/02 15:16:45 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

//didn't consider if there have many +- sign before number
static bool	check_overflow(char *str)
{
	long	num;
	size_t	len;

	len = ft_strlen(str);
	if (len > 9 && len < 12)
	{
		num = ft_long_atoi(str);
		if (num < INT32_MIN || num > INT32_MAX || num == 0 || num == 1)
			return (false);
	}
	else if (len >= 12)
		return (false);
	return (true);
}

static bool	check_num(char *str)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0')
		return (false);
	return (true);
}

void	check_input(int argc, char **argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		if (!check_num(argv[i]))
			show_error("Find argument isn't number.");
		if (!check_overflow(argv[i]))
			show_error("Find argument has overflow.");
		i++;
	}
}
