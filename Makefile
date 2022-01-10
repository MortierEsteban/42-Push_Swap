NAME	=	push_swap
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g

SRCS	=	main.c \
			srcs/parse.c \
			srcs/utils.c \
			srcs/stack_actions/push.c \
			srcs/stack_actions/rotate.c \
			srcs/stack_actions/swaps.c \
			srcs/stack_actions/reverse.c

OBJS	=	$(SRCS:.c=.o)

%.o:	%.c incl/push_swap.h Makefile
		${CC} ${CFLAGS} -c $< -o $@


$(NAME)	:	$(OBJS)
		@make -C ./libft		
		$(CC) $(CFLAGS) -L libft -l ft $^ -o $@

all		:	$(NAME)

clean	:
			@make -C ./libft/ clean
			$(RM) $(OBJS)

fclean	:	clean
			@make -C ./libft/ fclean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re