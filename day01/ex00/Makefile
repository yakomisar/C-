# Project file
NAME		= BraiiiiiiinnnzzzZ
CC 			= c++
CFLAGS		= -std=c++98 -Wall -Werror -Wextra
RM 			= rm -f

SRC_S = newZombie.cpp randomChump.cpp Zombie.cpp
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