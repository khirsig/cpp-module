CC = c++

NAME = materia

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJDIR = ./obj/
OBJECTS = $(OBJDIR)/*.o
SRC =	main.cpp				\
		AMateria.cpp			\
		Character.cpp			\
		Cure.cpp				\
		Ice.cpp					\
		MateriaSource.cpp		\

HEAD =	AMateria.hpp			\
		ICharacter.hpp			\
		Character.hpp			\
		Cure.hpp				\
		Ice.hpp					\
		IMateriaSource.hpp		\
		MateriaSource.hpp		\

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
