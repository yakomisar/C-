# Project file
NAME	=	main

# Project builds
SRCNAMES	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
SRC 		= $(addprefix $(SRCDIR), $(SRCNAMES))
OBJ			= $(SRC:.cpp=.o)
BUILDDIR 	= ./build/
BUILDOBJS 	= $(addprefix $(BUILDDIR), $(SRCNAMES:.cpp=.o))

# Optimization and compiler flags
CC			= c++
CFLAGS		= -std=c++98 -Wall -Werror -Wextra

# Main rule
all:		$(BUILDDIR) $(NAME)

# Object dir rule
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Object dir rule
$(BUILDDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

# Project file rule
$(NAME): $(BUILDOBJS)
	$(CC) -o $(NAME) $(BUILDOBJS)

# Cleaning up the build files
clean:
	rm -rf $(SRCDIR)$(OBJ)

# Getting rid of the project file
fclean: clean
	rm -rf $(NAME)
	rm -rf $(BUILDDIR)

# Do both of the above
re: fclean all

# Just in case those files exist in the root dir
.PHONY: all fclean clean re