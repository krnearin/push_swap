/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:10:49 by                   #+#    #+#             */
/*   Updated: 2021/10/28 18:22:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_2(t_stack **a)
{
	sa(a);
}

void	sort_3(t_stack **a)
{
	int	min;
	int	max;

	min = min_int(a);
	max = max_int(a);
	if ((*a)->index == max)
		ra(a);
	if ((*a)->index == min && (*a)->next->index == max)
	{
		rra(a);
		sa(a);
	}
	if ((*a)->index != min && ((*a)->index > (*a)->next->index))
		sa(a);
	if ((*a)->index != min && (*a)->index < (*a)->next->index)
		rra(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;
	int	min;

	i = 0;
	min = min_int(a);
	while (i < 2)
	{
		if ((*a)->index > min && !puk(a, min, ft_size(a)))
			ra(a);
		else if ((*a)->index > min && puk(a, min, ft_size(a)))
			rra(a);
		else
		{
			pb(a, b);
			min = min_int(a);
			i++;
		}
	}
	if ((*a)->index != min)
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > min_int(a) && !puk(a, min_int(a), ft_size(a)))
			ra(a);
		else if ((*a)->index > min_int(a) && puk(a, min_int(a), ft_size(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_int(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sort(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		sort_2(a);
	if (size == 3)
		sort_3(a);
	if (size == 4)
		sort_4(a, b);
	if (size == 5)
		sort_5(a, b);
	if (5 < size && size <= 100)
		sort_100(a, b);
	if (100 < size)
		sort_500(a, b);
}
