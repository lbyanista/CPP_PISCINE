NAME	=	Polymorphism
SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp
CPP		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all