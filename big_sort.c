/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 00:30:12 by                   #+#    #+#             */
/*   Updated: 2021/10/29 00:30:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_100(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i > 1 && (*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 15)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i)
			ra(a);
	}
	sort_b(a, b);
}

void	sort_500(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i > 1 && (*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 30)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i)
			ra(a);
	}
	sort_b(a, b);
}
