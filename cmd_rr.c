/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:46:07 by                   #+#    #+#             */
/*   Updated: 2021/10/28 17:46:07 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	run_rr(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	*stack = (*stack)->next;
	tmp->next->next = 0;
}

void	ra(t_stack **stack_a)
{
	run_rr(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b)
{
	run_rr(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	run_rr(stack_a);
	run_rr(stack_b);
	write(1, "rr\n", 3);
}
