NAME     :=	phonebook
SRC      :=	Phonebook.cpp Contact.cpp main.cpp
OBJ      :=	$(SRC:.cpp=.o)
HDR      :=	Phonebook.hpp Contact.hpp
CC       :=	c++
CXXFLAGS :=	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re bonus
all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

bonus:

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

