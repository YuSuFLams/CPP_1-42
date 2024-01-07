NAME = Interface

C_PURPLE    = \033[95m
C_CYAN   = \033[96m
C_RESET = \033[0m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(C_PURPLE) - Compilation finished!....$(C_RESET)"

%.o:%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(C_CYAN)        - Removed Object File finished!....$(C_RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(C_CYAN)    - Removed finished!....$(C_RESET)"

re: fclean all

.PHONY: all fclean clean re
