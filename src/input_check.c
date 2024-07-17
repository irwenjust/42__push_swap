/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:16:36 by likong            #+#    #+#             */
/*   Updated: 2024/07/17 18:21:03 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static int	count_num(char **strs)
{
	char	**res;
	int		amount;
	int		i;
	int		j;

	amount = 0;
	i = 0;
	while (strs[++i])
	{
		res = ft_split(strs[i], ' ');
		if (!res)
			ft_exit();
		j = -1;
		while (res[++j])
			amount++;
		free_strs(res);
	}
	return (amount);
}

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

static void	check_num(int *nums, int position, char **strs)
{
	int	i;
	int	res;

	res = nums[position];
	i = position - 1;
	while (i >= 0)
	{
		if (nums[i] == res)
		{
			free(nums);
			free_strs(strs);
			ft_exit();
		}
		i--;
	}
}

static void	check_detail(char **res, int **nums, int *k, int *j)
{
	if (!check_overflow(res[*k]))
		free_sum((*nums), res);
	(*nums)[++(*j)] = ft_long_atoi(res[*k]);
	check_num((*nums), (*j), res);
}

void	check_input(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		*nums;
	char	**res;

	i = 1;
	j = -1;
	nums = (int *)malloc((count_num(argv) + 1) * sizeof(int));
	if (!nums)
		ft_exit();
	while (i < argc)
	{
		res = ft_split(argv[i], ' ');
		if (!res)
			free_sum(nums, res);
		k = -1;
		while (res[++k])
			check_detail(res, &nums, &k, &j);
		free_strs(res);
		i++;
	}
	free(nums);
}
