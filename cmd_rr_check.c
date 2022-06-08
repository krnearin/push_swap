/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rr_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krnearin <krnearin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:48:41 by krnearin          #+#    #+#             */
/*   Updated: 2022/02/03 23:48:41 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	run_rr_c(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	*stack = (*stack)->next;
	tmp->next->next = 0;
}

void	ra_c(t_stack **stack_a)
{
	run_rr_c(stack_a);
}

void	rb_c(t_stack **stack_b)
{
	run_rr_c(stack_b);
}

void	rr_c(t_stack **stack_a, t_stack **stack_b)
{
	run_rr_c(stack_a);
	run_rr_c(stack_b);
}
