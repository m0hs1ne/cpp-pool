NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./main.cpp \

NAME		= replace

CC			= clang++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -g  -std=c++98 -fsanitize=address

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -o ${NAME} $(OBJS)
			@echo "${GREEN}${NAME}	has been created\n${NC}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}	${NAME}	has been deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re
