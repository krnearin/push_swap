MY_PUSH_SWAP	= push_swap
MY_CHECKER		= checker

MY_PUSH_SWAP_SRCS = main.c ft_atoi.c ft_split.c utils_2.c big_sort.c ft_exit.c ft_strlen.c ft_isdigit.c src.c cmd_rr.c cmd_rrr.c cmd_ss_pp.c ft_bzero.c sort.c utils.c utils_3.c

MY_CHECKER_SRCS	= ft_atoi.c ft_split.c ft_exit.c ft_strlen.c ft_isdigit.c src.c ft_bzero.c cmd_rr_check.c cmd_rrr_check.c cmd_ss_pp_c.c get_next_line.c get_next_line_utils.c ft_strcmp.c checker.c check_main.c utils_2.c


HEADER		= push_swap.h

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

all: $(MY_PUSH_SWAP)

$(MY_PUSH_SWAP) : $(MY_PUSH_SWAP_SRCS)
	@$(CC) $(FLAGS) $(MY_PUSH_SWAP_SRCS) -o $(MY_PUSH_SWAP)
	@printf "push_swap was build ✅\n"

%.o: %.c	$(HEADER)
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

bonus: $(MY_CHECKER)

$(MY_CHECKER) : $(MY_CHECKER_SRCS)
	@$(CC) $(FLAGS) $(MY_CHECKER_SRCS) -o $(MY_CHECKER)
	@printf "checker was build ✅\n"


clean:
		@$(RM) $(MY_PUSH_SWAP) $(MY_CHECKER)
		@printf "ALL is in trash 🗑\n"

fclean: clean

re: fclean all

rebonus: fclean bonus

.PHONY : all clean fclean re bonus rebonus