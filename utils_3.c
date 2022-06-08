/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 00:20:40 by                   #+#    #+#             */
/*   Updated: 2021/10/29 00:20:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	max_int(t_stack **a)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = *a;
	i = stack->index;
	while (stack != NULL)
	{
		if (i < stack->index)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

int	min_int(t_stack **a)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = *a;
	i = stack->index;
	while (stack != NULL)
	{
		if (i > stack->index)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}
