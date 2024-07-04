/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:16:36 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 16:55:21 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

//Only work for 64 bytes system
static bool	check_overflow(char *str)
{
	long	num;
	size_t	len;

	len = ft_strlen(str);
	if (len > 9)
	{
		num = ft_long_atoi(str);
		if (num < INT32_MIN || num > INT32_MAX)
			return (false);
	}
	return (true);
}

static void	check_num(int *nums, int position)
{
	int i;
	int res;

	res = nums[position];
	i = position - 1;
	while (i >= 0)
	{
		if (nums[i] == res)
		{
			free(nums);
			ft_printf("Arguments cannot has same number.\n");
			exit(EXIT_FAILURE);
		}
		i--;
	}
}

void	check_input(int argc, char **argv)
{
	int	i;
	int *nums;
	
	i = 1;
	nums = (int *)malloc((argc) * sizeof(int));
	if (!nums)
	{
		ft_printf("Cannot create space for number array.\n");
		exit(EXIT_FAILURE);
	}
	while (i < argc)
	{
		if (!check_overflow(argv[i]))
		{
			ft_printf("Find argument has overflow.\n");
			exit(EXIT_FAILURE);
		}
		nums[i - 1] = ft_long_atoi(argv[i]);
		check_num(nums, (i - 1));
		i++;
	}
	free(nums);
}
