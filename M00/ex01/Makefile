NAME	=	Phonebook
SRC		=	Contact.cpp Phonebook.cpp
CLANG	=	clang++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all