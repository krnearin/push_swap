/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krnearin <krnearin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:41:02 by krnearin          #+#    #+#             */
/*   Updated: 2022/02/03 23:47:14 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*ft_stack(int argc, char **argv)
{
	static t_stack	*stack_a;
	int				i;
	int				num;
	char			**numbers;
	int				stop;

	numbers = argv;
	i = argc;
	stop = 0;
	while (--i > stop)
	{
		num = ft_atoi(numbers[i]);
		s_push(&stack_a, num);
	}
	return (stack_a);
}

void	s_push(t_stack **stack_a, int n)
{
	t_stack	*tmp;

	if (!stack_a)
		return ;
	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp->data = n;
	tmp->next = *stack_a;
	*stack_a = tmp;
}

void	pusk(char *line, t_stack *a, t_stack *b)
{
	if (ft_strcmp(line, "sb") == 0 && b)
		sb_c(&b);
	else if (ft_strcmp(line, "ss") == 0)
		ss_c(&a, &b);
	else if (ft_strcmp(line, "sa") == 0)
		sa_c(&a);
	else if (ft_strcmp(line, "pa") == 0 && b)
		pa_c(&a, &b);
	else if (ft_strcmp(line, "pb") == 0)
		pb_c(&a, &b);
	else if (ft_strcmp(line, "ra") == 0)
		ra_c(&a);
	else if (ft_strcmp(line, "rb") == 0 && b)
		rb_c(&b);
	else if (ft_strcmp(line, "rr") == 0 && b)
		rr_c(&a, &b);
	else if (ft_strcmp(line, "rra") == 0)
		rra_c(&a);
	else if (ft_strcmp(line, "rrb") == 0 && b)
		rrb_c(&b);
	else if (ft_strcmp(line, "rrr") == 0 && b)
		rrr_c(&a, &b);
}

int	go_gnl(t_stack *a, t_stack *b)
{
	char	*line;
	int		i;

	i = -2;
	line = NULL;
	while (i == -2 || i > 0)
	{
		i = get_next_line(0, &line);
		if (i <= 0)
			break ;
		pusk(line, a, b);
	}
	if (i == -1)
		ft_exit("Error");
	if (!(stack_sorted(a)))
		return (0);
	return (1);
}

void	ft_index(t_stack *stack_o)
{
	t_stack	*stack;
	int		len;
	int		*array;
	int		i;

	stack = stack_o;
	len = s_len(stack);
	array = ft_array(stack, len);
	ft_b_sort(array, len);
	while (stack)
	{
		i = 0;
		while (stack->data != array[i])
			i++;
		stack->index = i + 1;
		stack = stack->next;
	}
}
