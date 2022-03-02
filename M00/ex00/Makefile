NAME	=	megaphone
SRC		=	megaphone.cpp
CLANG	=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all