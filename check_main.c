/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krnearin <krnearin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:46:23 by krnearin          #+#    #+#             */
/*   Updated: 2022/02/03 23:47:14 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

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
	if (go_gnl(a, b))
		ft_exit("KO");
	else
		write(1, "OK\n", 3);
	return (0);
}
