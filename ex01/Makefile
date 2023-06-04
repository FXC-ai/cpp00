SRCS	=	main.cpp contact.cpp phonebook.cpp

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Werror -Wextra -std=c++98

CC		= g++

RM		= rm -f

NAME 	= phonebook

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	${RM}  $(NAME)

re: fclean all

.PHONY: all clean fclean re