NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./src/main.cpp ./src/BitcoinExchange.cpp

NAME		= btc

CC			= c++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3


all:		${NAME}

${NAME}:	${SRCS}
			@${CC} ${CPPFLAGS} ${SRCS}  -o ${NAME}
			@echo "${GREEN}$(NAME) program has been created${NC}"

clean:
			
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}	$(NAME) program	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re
