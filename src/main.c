/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:53:30 by likong            #+#    #+#             */
/*   Updated: 2024/07/05 15:50:49 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	check_args(int argc, char **argv)
{
	(void)argv;
	if (argc <= 1)
	{
		//ft_printf("\n");
		exit(EXIT_FAILURE);
	}
	else if (argc > 1205)
	{
		ft_printf("Only allow less than 1206 numbers in this push swap.\n");
		exit(EXIT_FAILURE);
	}
}

int main(int argc, char **argv)
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

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 100 // Maximum size of the stack

// // Structure to represent a stack
// struct Stack {
//     int top;
//     int items[MAX];
// };

// // Function to initialize the stack
// void initialize(struct Stack* stack) {
//     stack->top = -1;
// }

// // Function to check if the stack is full
// int isFull(struct Stack* stack) {
//     return stack->top == MAX - 1;
// }

// // Function to check if the stack is empty
// int isEmpty(struct Stack* stack) {
//     return stack->top == -1;
// }

// // Function to push an element onto the stack
// void push(struct Stack* stack, int item) {
//     if (isFull(stack)) {
//         printf("Stack overflow\n");
//         return;
//     }
//     stack->items[++stack->top] = item;
//     printf("%d pushed to stack\n", item);
// }

// // Function to pop an element from the stack
// int pop(struct Stack* stack) {
//     if (isEmpty(stack)) {
//         printf("Stack underflow\n");
//         return -1; // Return -1 or any sentinel value indicating the stack is empty
//     }
//     return stack->items[stack->top--];
// }

// // Function to peek at the top element of the stack
// int peek(struct Stack* stack) {
//     if (isEmpty(stack)) {
//         printf("Stack is empty\n");
//         return -1; // Return -1 or any sentinel value indicating the stack is empty
//     }
//     return stack->items[stack->top];
// }

// int main() {
//     struct Stack stack;
//     initialize(&stack);

//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);

// 	printf("Top element is %d\n", peek(&stack));
//     printf("%d popped from stack\n", pop(&stack));

//     printf("Top element is %d\n", peek(&stack));

//     return 0;
// }

