/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:49 by likong            #+#    #+#             */
/*   Updated: 2024/07/04 20:49:38 by likong           ###   ########.fr       */
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
	int				num;
	struct s_stack	*next;
}	t_stack;

//list part 
// t_stack	*lst_new(int num);
// t_stack	*lst_last(t_stack *lst);
// void	lst_del_node(t_stack **lst);
// void	lst_clear(t_stack **lst, void (*del)(int *));
// void	lst_add_front(t_stack **lst, t_stack *new);
// void	lst_add_back(t_stack **lst, t_stack *new);

//Check input
void	check_input(int argc, char **argv);

//Initial stack
t_stack	*init_stack(int argc, char **argv);

//Link list functions
t_stack	*lst_new(int content);
void	lst_add_back(t_stack **lst, t_stack *new);
void	lst_clear(t_stack **lst);
t_stack	*lst_last(t_stack *lst);

//Tool function
// void	show_error(t_stack *stack, char *message);
long	ft_long_atoi(char *str);

//Delete function
void	delete_stack(t_stack *stack);

//Rule funcion
void	swap_a(t_stack **s);
void	swap_b(t_stack **s);
void	swap_ss(t_stack **a, t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_rr(t_stack **a, t_stack **b);
void	rrotate_a(t_stack **a);
void	rrotate_b(t_stack **b);
void	rrotate_rr(t_stack **a, t_stack **b);

//algorithm
void	push_swap(t_stack **a, t_stack **b);
