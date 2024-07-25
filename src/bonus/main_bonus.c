/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:38:01 by likong            #+#    #+#             */
/*   Updated: 2024/07/25 08:21:24 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap_bonus.h"

static void	check_args(int argc, char **argv)
{
	(void)argv;
	if (argc <= 1)
		exit(EXIT_FAILURE);
	else if (argc > 1205)
	{
		ft_printf("Sorry, this push_swap cannot handle too many numbers.\n");
		exit(EXIT_FAILURE);
	}
}

static char	*check_operation(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "sa\n", 10))
		swap_a(a);
	else if (!ft_strncmp(line, "sb\n", 10))
		swap_b(b);
	else if (!ft_strncmp(line, "ss\n", 10))
		swap_ss(a, b);
	else if (!ft_strncmp(line, "pa\n", 10))
		push_a(a, b);
	else if (!ft_strncmp(line, "pb\n", 10))
		push_b(a, b);
	else if (!ft_strncmp(line, "ra\n", 10))
		rotate_a(a);
	else if (!ft_strncmp(line, "rb\n", 10))
		rotate_b(b);
	else if (!ft_strncmp(line, "rr\n", 10))
		rotate_rr(a, b);
	else if (!ft_strncmp(line, "rra\n", 10))
		rrotate_a(a);
	else if (!ft_strncmp(line, "rrb\n", 10))
		rrotate_b(b);
	else if (!ft_strncmp(line, "rrr\n", 10))
		rrotate_rr(a, b);
	else
		ft_exit();
	return (get_next_line(0));
}

static void	lets_sort(t_stack **a, t_stack **b, char *line)
{
	char	*res;

	while (line && *line != '\n')
	{
		res = line;
		line = check_operation(a, b, line);
		free(res);
	}
	if (*b || !a_has_sort(*a))
		ft_printf("KO\n");
	else if (!(*b) && a_has_sort(*a))
		ft_printf("OK\n");
	free(line);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	b = NULL;
	check_args(argc, argv);
	check_input(argc, argv);
	a = init_stack(argc, argv);
	line = get_next_line(0);
	if (!line && !a_has_sort(a))
		ft_printf("KO\n");
	else if (!line && a_has_sort(a))
		ft_printf("OK\n");
	else
		lets_sort(&a, &b, line);
	delete_stack(a);
	delete_stack(b);
	return (0);
}
