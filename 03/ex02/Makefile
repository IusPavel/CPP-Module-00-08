NAME     :=	fragTrap
SRC      :=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ      :=	$(SRC:.cpp=.o)
HDR      :=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
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
