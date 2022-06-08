/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:23:36 by                   #+#    #+#             */
/*   Updated: 2021/10/29 00:19:46 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ss_len(int argc)
{
	int		i;

	i = argc - 1;
	return (i);
}

int	ft_size(t_stack **a)
{
	t_stack	*b;
	int		i;

	i = 0;
	b = *a;
	while (b->next != NULL)
	{
		b = b->next;
		i++;
	}
	return (i);
}

int	array_index(t_stack *s, int *num)
{
	int	d;

	if (!s || !num)
		return (0);
	d = 0;
	while (s)
	{
		num[d] = s->index;
		s = s->next;
		d++;
	}
	return (*num);
}

int	puk(t_stack **a, int m, int i)
{
	int	j;
	int	*num;

	num = malloc(sizeof(int) * (i + 1));
	if (!num)
		return (0);
	*num = array_index(*a, num);
	j = i;
	while (num[i] != m)
		i--;
	j = j - i;
	i = 0;
	while (num[i] != m)
		i++;
	free(num);
	if (j < i)
		return (1);
	return (0);
}

void	sort_b(t_stack **a, t_stack **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != max_int(b) && !puk(b, max_int(b), ft_size(b)))
			rb(b);
		else if ((*b)->index != max_int(b) && puk(b, max_int(b), ft_size(b)))
			rrb(b);
		else if ((*b)->index == max_int(b))
			pa(a, b);
	}
}
