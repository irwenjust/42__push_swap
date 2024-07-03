/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:49 by likong            #+#    #+#             */
/*   Updated: 2024/07/03 18:34:36 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/get_next_line/get_next_line.h"

typedef struct s_stack
{
	int	num;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//list part 
t_stack	*lst_new(int num);
t_stack	*lst_last(t_stack *lst);
void	lst_del_node(t_stack **lst);
void	lst_clear(t_stack **lst, void (*del)(int *));
void	lst_add_front(t_stack **lst, t_stack *new);
void	lst_add_back(t_stack **lst, t_stack *new);

//Check input
int		*check_input(int argc, char **argv);

//Tool function
void	show_error(char *message);
long	ft_long_atoi(char *str);
