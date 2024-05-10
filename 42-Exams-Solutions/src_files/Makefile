NAME = exams_solutions
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS_FILES = ../src_files/fizzbuzz.c
OBJ_FILES = $(SRCS_FILES=%.c:%.o)

$(NAME): $(OBJ_FILES)
		$(CC) $(SRCS_FILES) $(FLAGS) $< -o $(NAME)
$(%c:%o):
		$(CC) $(FLAGS)
all: $(NAME)

clean: 
	rm -f $(OBJ_FILES)
fclean: clean
		rm -f $(NAME)
re: fclean all
.PHONY: clean fclean all re
