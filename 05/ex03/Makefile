NAME     :=	intern
SRC      :=	Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp \
			main.cpp
OBJ      :=	$(SRC:.cpp=.o)
HDR      :=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
			ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
			Intern.hpp
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
