/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:58:07 by                   #+#    #+#             */
/*   Updated: 2021/10/28 23:54:26 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

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

int	main(int argc, char **argv)
{
	static t_stack	*a;
	static t_stack	*b;

	if (argc == 1)
	{
		write(1, "Example: 1 2 3 4\n", 17);
		return (0);
	}
	if (chek_argv(argc, argv) == -1)
		ft_exit("Error");
	a = ft_stack(argc, argv);
	if (chek_cpy(a) == -1)
		ft_exit("Error");
	if (stack_sorted(a) == 0)
		exit(0);
	ft_index(a);
	sort(&a, &b, ss_len(argc));
	return (0);
}
