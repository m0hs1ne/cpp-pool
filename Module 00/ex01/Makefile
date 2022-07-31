NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./main.cpp \
				./Contact.cpp \
				./PhoneBook.cpp


INCLUDES	=	./Contact.hpp \
				./PhoneBook.hpp

HEAD		=	./

NAME		= My_awesome_PhoneBook

CC			= clang++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -g  -std=c++98

.c.o:
		@${CC} ${CFLAGS} -I${HEAD} -c $< -o ${<:.cpp=.o}


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${HEAD} -o ${NAME} $(OBJS)
			@echo "${GREEN}My_awesome_PhoneBook program	has been created\n${NC}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}	My_awesome_PhoneBook program	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re
