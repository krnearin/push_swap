/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rrr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:46:23 by                   #+#    #+#             */
/*   Updated: 2021/10/28 17:46:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_rrr(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *stack;
	*stack = tmp->next;
	tmp->next = 0;
}

void	rra(t_stack **stack_a)
{
	run_rrr(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	run_rrr(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	run_rrr(stack_a);
	run_rrr(stack_b);
	write(1, "rrr\n", 4);
}
