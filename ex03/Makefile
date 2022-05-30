NAME = main
SRC = main.cpp Bureaucrat.cpp myException.cpp Form.cpp ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ = $(SRC:%.cpp=%.o)
CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -c -std=c++98

all: $(NAME)

$(NAME):$(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(wildcard *_shrubbery)

fclean: clean
	rm -f $(NAME)

re: fclean all