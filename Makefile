SRCS		=	ft_write.s ft_read.s ft_strlen.s ft_strcpy.s
OBJS		=	$(SRCS:.s=.o)
NASM		=	nasm
NASM_FLAGS	=	-f elf64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a

%.o:			%.s
				$(NASM) $(NASM_FLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS) 

fclean:			clean
				rm -rf $(NAME)

re:				fclean $(NAME)

.PHONY:			clean fclean re all
