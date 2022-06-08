/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:16:55 by                   #+#    #+#             */
/*   Updated: 2021/10/29 00:18:09 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_b_sort(int *num, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = (size - 1);
		while (j > i)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
			j--;
		}
		i++;
	}
}

int	chek_cpy(t_stack *stack_o)
{
	int	len;
	int	*array;
	int	i;

	len = s_len(stack_o);
	array = ft_array(stack_o, len);
	ft_b_sort(array, len);
	i = 1;
	while (i < len)
	{
		if (array[i - 1] == array[i])
			return (-1);
		i++;
	}
	return (0);
}

int	s_len(t_stack *stack_o)
{
	t_stack	*stack;
	int		len;

	stack = stack_o;
	len = 0;
	while (stack->next)
	{
		len++;
		stack = stack->next;
	}
	len++;
	return (len);
}

int	stack_sorted(t_stack *stack_o)
{
	t_stack	*stack;

	stack = stack_o;
	while (stack && stack->next)
	{
		if (stack->data >= stack->next->data)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	*ft_array(t_stack *stack_o, int len)
{
	int		*array;
	int		i;
	t_stack	*stack;

	array = (int *) malloc(sizeof(int) * (1 + len));
	if (!array)
		exit(0);
	i = 0;
	stack = stack_o;
	while (i < len)
	{
		array[i] = stack->data;
		stack = stack->next;
		i++;
	}
	return (array);
}
