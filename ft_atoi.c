/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:45:55 by                   #+#    #+#             */
/*   Updated: 2021/10/28 17:49:47 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

const char	*ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	return ((const char *)str + i);
}

int	ft_number(const char *str, int sing)
{
	int				i;
	long long int	nbr;
	int				mid;

	nbr = 0;
	i = 0;
	mid = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		mid = mid * 10 + str[i] - 48;
		nbr = nbr * 10 + str[i] - 48;
		i++;
		if (nbr < 0)
		{
			if (sing < 0)
				return (0);
			else
				return (-1);
		}
	}
	return (mid * sing);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sing;

	i = 0;
	sing = 1;
	if (str[i] == '\0')
		return (0);
	str = ft_isspace(str);
	if ((str[i + 1] == '-') || (str[i + 1] == '+'))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
	}
	return (ft_number(str, sing));
}
