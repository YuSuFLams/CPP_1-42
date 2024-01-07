NAME = brain

C_BLUE    = \033[0;34m
C_GREEN   = \033[0;32m
C_RESET = \033[0m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): main.o
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(C_BLUE)    - Compilation finished!....$(C_RESET)"

main.o: main.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) main.o
	@echo "$(C_GREEN)    - Removed Object File finished!....$(C_RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(C_GREEN)    - Removed finished!....$(C_RESET)"

re: fclean all

.PHONY: all fclean clean re
