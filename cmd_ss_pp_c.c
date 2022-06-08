/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_ss_pp_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krnearin <krnearin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:49:24 by krnearin          #+#    #+#             */
/*   Updated: 2022/02/03 23:49:44 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa_c(t_stack **stack_a)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (*stack_a && (*stack_a)->next)
	{
		tmp1 = *stack_a;
		tmp2 = tmp1->next;
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		*stack_a = tmp2;
	}
}

void	sb_c(t_stack **stack_b)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (*stack_b && (*stack_b)->next)
	{
		tmp1 = *stack_b;
		tmp2 = tmp1->next;
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		*stack_b = tmp2;
	}
}

void	ss_c(t_stack **stack_a, t_stack **stack_b)
{
	sa_c(stack_a);
	sb_c(stack_b);
}

void	pa_c(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
}

void	pb_c(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}
