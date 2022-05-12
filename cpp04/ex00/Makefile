CC = c++

NAME = polymorphism

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJDIR = ./obj/
OBJECTS = $(OBJDIR)/*.o
SRC =	main.cpp				\
		Animal.cpp				\
		Cat.cpp					\
		Dog.cpp					\
		WrongAnimal.cpp			\
		WrongCat.cpp			\


HEAD =	Animal.hpp				\
		Cat.hpp					\
		Dog.hpp					\
		WrongAnimal.hpp			\
		WrongCat.hpp			\

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
