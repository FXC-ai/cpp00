SRCS	=	main.cpp contact.cpp phonebook.cpp

CFLAGS	= -Wall -Werror -Wextra -std=c++98

CC		= g++

RM		= rm -f

NAME 	= phonebook

$(NAME): $(SRCS)
	$(CC) -o $(NAME) $(SRCS)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re