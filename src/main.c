/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:30 by likong            #+#    #+#             */
/*   Updated: 2024/07/17 19:25:44 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	check_args(int argc, char **argv)
{
	(void)argv;
	if (argc <= 1)
		exit(EXIT_FAILURE);
	else if (argc > 1205)
	{
		ft_printf("Only allow less than 1206 numbers in this push swap.\n");
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_recorder	r;

	check_args(argc, argv);
	check_input(argc, argv);
	init_recorder(&r);
	a = init_stack(argc, argv, &r);
	b = NULL;
	if (!(a_has_sort(a)))
		push_swap(&a, &b, &r);
	delete_stack(a);
	delete_stack(b);
	return (0);
}
