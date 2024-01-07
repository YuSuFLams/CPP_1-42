NAME = violence

C_BLUE    = \033[0;34m
C_GREEN   = \033[0;32m
C_RESET = \033[0m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(C_BLUE)    - Compilation finished!....$(C_RESET)"

%.o:%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(C_GREEN)    - Removed Object File finished!....$(C_RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(C_GREEN)    - Removed finished!....$(C_RESET)"

re: fclean all

.PHONY: fclean all clean re
