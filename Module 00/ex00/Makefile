NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

NAME = megaphone

OBJS = megaphone.o

SRC = megaphone.cpp

CC	= clang++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g  -std=c++98

$(NAME): $(OBJS)
		@-$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRC)
		@$(CC) $(CFLAGS) -c $< -o $@
		@echo "${GREEN} Compiled "$<" successfully!\n${NC}"

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

PHONY:	all clean fclean re