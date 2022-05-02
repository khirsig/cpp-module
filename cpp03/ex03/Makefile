CC = c++

NAME = diamondtrap

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJDIR = ./obj/
OBJECTS = $(OBJDIR)/*.o
SRC =	main.cpp				\
		ClapTrap.cpp			\
		ScavTrap.cpp			\
		FragTrap.cpp			\
		DiamondTrap.cpp			\

HEAD =	ClapTrap.hpp			\
		ScavTrap.hpp			\
		FragTrap.hpp			\
		DiamondTrap.hpp			\

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SRC) $(HEAD)
	$(CC) -c $(CFLAGS) $(SRC)
	@rm -rf $(OBJDIR); mkdir $(OBJDIR)
	@mv *.o $(OBJDIR)

clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
