NAME		= account
CC 			= c++
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -f

SRC_S = Account.cpp
OBJ_S = $(SRC_S:%.cpp=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ_S)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ_S)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re