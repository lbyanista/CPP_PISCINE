NAME	=	Unnecessary_violence
SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
CPP		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all