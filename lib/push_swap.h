/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:49 by likong            #+#    #+#             */
/*   Updated: 2024/07/18 09:01:49 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/get_next_line/get_next_line.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

typedef struct s_recorder
{
	int	nums;
	int	steps;
}	t_recorder;

//Check input
void	check_input(int argc, char **argv);

//Initial stack
t_stack	*init_stack(int argc, char **argv, t_recorder *r);
void	init_recorder(t_recorder *r);

//Link list functions
t_stack	*lst_new(int content);
t_stack	*lst_last(t_stack *lst);
void	lst_add_back(t_stack **lst, t_stack *new);
void	lst_clear(t_stack **lst);
int		lst_size(t_stack *lst);

//Tool function
bool	a_has_sort(t_stack *a);
int		min(t_stack *s);
int		max(t_stack *s);
void	free_strs(char **strs);
void	ft_exit(void);
void	print_stack(t_stack *stack, char c);

// void	show_error(t_stack *stack, char *message);
long	ft_long_atoi(char *str);

//Delete function
void	delete_stack(t_stack *stack);
void	free_sum(int *str, char **strs);

//Rule funcion
void	swap_a(t_stack **s, t_recorder *r);
void	swap_b(t_stack **s, t_recorder *r);
void	swap_ss(t_stack **a, t_stack **b, t_recorder *r);
void	push_a(t_stack **a, t_stack **b, t_recorder *r);
void	push_b(t_stack **a, t_stack **b, t_recorder *r);
void	rotate_a(t_stack **a, t_recorder *r);
void	rotate_b(t_stack **b, t_recorder *r);
void	rotate_rr(t_stack **a, t_stack **b, t_recorder *r);
void	rrotate_a(t_stack **a, t_recorder *r);
void	rrotate_b(t_stack **b, t_recorder *r);
void	rrotate_rr(t_stack **a, t_stack **b, t_recorder *r);

//algorithm
void	push_swap(t_stack **a, t_stack **b, t_recorder *r);
void	sort_3_number(t_stack **a, t_recorder *r);
int		cal_steps_ab(t_stack *a, t_stack *b);
int		cal_steps_ba(t_stack *a, t_stack *b);

//rotate check
int		if_rarb(t_stack *a, t_stack *b, int num, char current);
int		if_rarrb(t_stack *a, t_stack *b, int num, char current);
int		if_rrarb(t_stack *a, t_stack *b, int num, char current);
int		if_rrarrb(t_stack *a, t_stack *b, int num, char current);

//stack check
int		find_pos_b(t_stack *b, int num);
int		find_inside(t_stack *stack, int num);
int		find_pos_a(t_stack *a, int num);

//operate
int		go_rarb(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rrarb(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rarrb(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rrarrb(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rbra(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rbrra(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rrbra(t_stack **a, t_stack **b, int num, t_recorder *r);
int		go_rrbrra(t_stack **a, t_stack **b, int num, t_recorder *r);

#endif
