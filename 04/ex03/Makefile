NAME     :=	inventory
SRC      :=	main.cpp AMateria.cpp Character.cpp Cure.cpp \
			Ice.cpp MateriaSource.cpp
OBJ      :=	$(SRC:.cpp=.o)
HDR      :=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp \
			ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
CC       :=	c++
CXXFLAGS :=	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
