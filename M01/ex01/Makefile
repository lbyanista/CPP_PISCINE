NAME	=	Moar_brainz
SRC		=	main.cpp Zombie.hpp Zombie.cpp zombieHorde.cpp
CLANG	=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all