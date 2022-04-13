NAME	=	ex02
SRC		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
CPP		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all