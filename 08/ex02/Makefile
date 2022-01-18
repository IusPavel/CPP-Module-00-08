NAME     :=	ex02
SRC      :=	mutantstack.cpp main.cpp 
OBJ      :=	$(SRC:.cpp=.o)
HDR      :=	mutantstack.hpp
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