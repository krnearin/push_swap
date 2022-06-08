/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rrr_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krnearin <krnearin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:35:32 by krnearin          #+#    #+#             */
/*   Updated: 2022/02/03 23:40:56 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	run_rrr_c(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *stack;
	*stack = tmp->next;
	tmp->next = 0;
}

void	rra_c(t_stack **stack_a)
{
	run_rrr_c(stack_a);
}

void	rrb_c(t_stack **stack_b)
{
	run_rrr_c(stack_b);
}

void	rrr_c(t_stack **stack_a, t_stack **stack_b)
{
	run_rrr_c(stack_a);
	run_rrr_c(stack_b);
}
