/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:07:50 by                   #+#    #+#             */
/*   Updated: 2022/02/03 23:53:36 by krnearin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <string.h>
# include <fcntl.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}				t_stack;

void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	ft_b_sort(int *num, int size);
void	ft_exit(char *error);
size_t	ft_strlen(const char *s);
void	s_push(t_stack **stack_a, int n);
int		s_len(t_stack *stack_o);
int		stack_sorted(t_stack *stack_o);
int		*ft_array(t_stack *stack_o, int len);
int		chek_cpy(t_stack *stack_o);
int		ft_isdigit(int c);
int		check_is_digit(char *str);
int		chek_argv(int argc, char **argv);
t_stack	*ft_stack(int argc, char **argv);
void	run_rr(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	run_rrr(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	sb(t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sort(t_stack **a, t_stack **b, int size);
int		min_int(t_stack **a);
int		max_int(t_stack **a);
int		ss_len(int argc);
int		array_index(t_stack *s, int *num);
int		ft_size(t_stack **a);
int		puk(t_stack **a, int m, int i);
void	sort_b(t_stack **a, t_stack **b);
int		check_is_int(char *str);
int		check_max_min(char *str);
void	sort_100(t_stack **a, t_stack **b);
void	sort_500(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	sort_4(t_stack **a, t_stack **b);
void	sort_3(t_stack **a);
void	sort_2(t_stack **a);
int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
void	run_rr_c(t_stack **stack);
void	ra_c(t_stack **stack_a);
void	rb_c(t_stack **stack_b);
void	rr_c(t_stack **stack_a, t_stack **stack_b);
void	run_rrr_c(t_stack **stack);
void	rra_c(t_stack **stack_a);
void	rrb_c(t_stack **stack_b);
void	rrr_c(t_stack **stack_a, t_stack **stack_b);
void	pb_c(t_stack **stack_a, t_stack **stack_b);
void	pa_c(t_stack **stack_a, t_stack **stack_b);
void	sb_c(t_stack **stack_b);
void	sa_c(t_stack **stack_a);
void	ss_c(t_stack **stack_a, t_stack **stack_b);
void	ft_index(t_stack *stack_o);
int		go_gnl(t_stack *a, t_stack *b);
char	*ft_str_new(size_t n);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
