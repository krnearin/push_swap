/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 00:20:35 by                   #+#    #+#             */
/*   Updated: 2021/10/29 00:33:42 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	check_max_min(char *str)
{
	int	i;
	int	sing;

	i = 0;
	sing = 1;
	if (str[i] == '-')
		sing = sing * -1;
	i = ft_atoi(str);
	if (sing > 0 && i < 0)
		return (-1);
	else if (sing < 0 && i > 0)
		return (-1);
	else
		return (0);
}

int	chek_argv(int argc, char **argv)
{
	int		i;
	char	**numbers;
	int		len;

	numbers = argv;
	len = argc;
	i = 1;
	while (i < len)
	{
		if (check_is_digit(numbers[i]) == -1 || check_is_int(numbers[i])
			|| check_max_min(numbers[i]) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int	check_is_int(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == ',')
			return (-1);
		i++;
	}
	return (0);
}

int	check_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}
