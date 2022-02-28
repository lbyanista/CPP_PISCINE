NAME	=	Phonebook
SRC		=	Contact.cpp Phonebook.cpp main.cpp
CLANG	=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all