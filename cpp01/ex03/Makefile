CC = c++

NAME = violence

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJDIR = ./obj/
OBJECTS = $(OBJDIR)/*.o
SRC =	main.cpp				\
		HumanA.cpp				\
		HumanB.cpp				\
		Weapon.cpp				\

HEAD =	HumanA.hpp				\
		HumanB.hpp				\
		Weapon.hpp				\

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
