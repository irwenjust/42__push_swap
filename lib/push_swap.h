/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:49 by likong            #+#    #+#             */
/*   Updated: 2024/07/02 15:23:04 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/get_next_line/get_next_line.h"

void	check_input(int argc, char **argv);

typedef struct s_stack
{
	int	top;
	int	*items;
}	t_stack;

//Tool function
void	show_error(char *message);
long	ft_long_atoi(char *str);
