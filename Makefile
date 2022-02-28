NAME		=	push_swap
NAME_B		=	checker

SRCS		= 	push_swap.c ft_atoi.c ft_check_argv.c\
			ft_exit.c ft_init.c ft_split.c\
			./commands/pa.c ./commands/pb.c\
			./commands/ra.c ./commands/rb.c ./commands/rra.c\
			./commands/rrb.c ./commands/sa.c ./commands/sb.c\
			./libft/ft_bzero.c ./libft/ft_calloc.c ./libft/ft_putstr.c\
			./libft/ft_strlen.c ./libft/ft_substr.c ./libft/ft_strncmp.c\
			./lists/ft_find_max.c ./lists/ft_find_med.c ./lists/ft_find_min.c\
			./lists/ft_find_prev_prev.c ./lists/ft_find_prev.c\
			./lists/ft_lstadd_back.c ./lists/ft_lstadd_front.c ./lists/ft_lstclear.c\
			./lists/ft_lstlast.c ./lists/ft_lstnew.c\
			./sorting/ft_sorting_3.c ./sorting/ft_sorting_5.c ./sorting/ft_sorting_main.c\
			./sorting/ft_unsorting_3.c ./sorting/ft_sorting.c ./sorting/ft_sorting_main_utils.c\

SRCS_B		=	checker.c ft_atoi.c ft_check_argv.c\
			ft_exit.c ft_init.c ft_split.c\
			./commands/pa.c ./commands/pb.c ./commands/ss.c\
			./commands/ra.c ./commands/rb.c ./commands/rra.c\
			./commands/rrb.c ./commands/sa.c ./commands/sb.c\
			./commands/rr.c ./commands/rrr.c\
			./libft/ft_bzero.c ./libft/ft_calloc.c ./libft/ft_putstr.c\
			./libft/ft_strlen.c ./libft/ft_substr.c ./libft/ft_strncmp.c\
			./lists/ft_find_max.c ./lists/ft_find_med.c ./lists/ft_find_min.c\
			./lists/ft_find_prev_prev.c ./lists/ft_find_prev.c\
			./lists/ft_lstadd_back.c ./lists/ft_lstadd_front.c ./lists/ft_lstclear.c\
			./lists/ft_lstlast.c ./lists/ft_lstnew.c\
			./gnl/get_next_line.c ./gnl/get_next_line_utils.c\

OBJ		=	$(SRCS:%.c=%.o)

OBJ_B		=	$(SRCS_B:%.c=%.o)

FLAGS		=	-Wall -Wextra -Werror

.PHONY		:	all bonus clean fclean re

all		:	$(NAME)

%.o		:	%.c
			@gcc $(FLAGS) -c $< -o $@

$(NAME)		:	$(OBJ)
			@gcc $(FLAGS) -o $(NAME) $(OBJ)

bonus		:	$(OBJ_B)
			@gcc $(FLAGS) -o $(NAME_B) $(OBJ_B)

clean		:	
			@rm -f $(OBJ) $(OBJ_B)

fclean		:	clean
			@rm -f $(NAME) $(NAME_B)

re		:	fclean all