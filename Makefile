CC = cc 

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAMEB = checker

MAINDATORY = dst_to_the_wayout.c from_sa_to_sb.c from_sb_to_sa.c ft_check_args.c ft_five_args.c ft_ranked_lst.c ft_sort_lst.c \
ft_three_args.c ft_two_args.c get_max_num.c get_second_max_num.c path_to_num.c push_from_sb_to_sa.c ft_four_args.c ft_error_printer.c

INSTRUCTIONS = pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c ss.c

BONUS = b_pa.c b_pb.c b_ra.c b_rb.c b_rr.c b_rra.c b_rrb.c b_rrr.c b_sa.c b_sb.c b_ss.c checker.c ft_check_sorted.c input.c

SRCS = $(addprefix ./maindatory/, $(MAINDATORY)) \
		$(addprefix ./instructions/, $(INSTRUCTIONS)) \
		push_swap.c 

BONUSS =$(addprefix ./maindatory/, ft_check_args.c ft_error_printer.c) \
		$(addprefix ./Bonus/, $(BONUS))

OBJS = $(SRCS:.c=.o)

BOBJS = $(BONUSS:.c=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	@echo "\033[0;35m your push_swap is compiling ...\033[0;0m"
	@make -C libft -s
	@ $(CC) $(CFLAGS) -o $(NAME) $(OBJS)  -L libft/ -l ft -L libft/ft_printf/ -l ftprintf

bonus : $(NAMEB)

$(NAMEB) : $(BOBJS)
	@echo "\033[0;33m your checker is compiling ...\033[0;0m"
	@MAKE -C libft -s
	@ $(CC) $(CFLAGS) -o $(NAMEB) $(BOBJS)  -L libft/ -l ft -L libft/ft_printf/ -l ftprintf

clean :
	@rm -rf $(OBJS) $(BOBJS)
	@MAKE clean -C libft

fclean : clean
	@rm -rf $(NAME) $(NAMEB)
	@MAKE fclean -C libft
	@echo "\033[0;32m all clean\033[0;0m"

re : fclean all