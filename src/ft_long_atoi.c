/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:17:19 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 11:47:51 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static int	is_space_or_not(char c)
{
	return (c == ' ' || c == '\t'
		|| c == '\n' || c == '\r'
		|| c == '\v' || c == '\f');
}

static int	check_sign(char c, int sig)
{
	if (c == '-')
		sig = (-1) * sig;
	return (sig);
}

long	ft_long_atoi(char *str)
{
	int		i;
	int		sig;
	long	num;
	long	check;

	i = 0;
	num = 0;
	sig = 1;
	while (is_space_or_not(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		sig = check_sign(str[i++], sig);
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = num * 10 + str[i++] - '0';
		if (check / 10 != num && sig == 1)
			return (2147483648);
		if (check / 10 != num && sig == -1)
			return (-2147483649);
		num = check;
	}
	if (str[i] != '\0')
		show_error("Find argument isn't number.");
	return (sig * num);
}
