/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:20:01 by likong            #+#    #+#             */
/*   Updated: 2024/07/20 12:34:34 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdbool.h>
# include <unistd.h>

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/get_next_line/get_next_line.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

//check arguments input
void	check_input(int argc, char **argv);

//tools function
void	ft_exit(void);
void	delete_stack(t_stack *stack);
void	free_strs(char **strs);
void	free_sum(int *str, char **strs);
bool	a_has_sort(t_stack *a);

//special atoi for push_swap
long	ft_long_atoi(char *str);

//initial stack
t_stack	*init_stack(int argc, char **argv);

//link list functions
t_stack	*lst_new(int content);
t_stack	*lst_last(t_stack *lst);
void	lst_add_back(t_stack **lst, t_stack *new);
void	lst_clear(t_stack **lst);
int		lst_size(t_stack *lst);

//rule functions
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

#endif
