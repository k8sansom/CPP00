NAME = 

CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c++98 

# Source dir and files
SRC_DIR = src
SRCS =	

# Object files
OBJ_DIR = obj
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Default target (all)
all: $(NAME)

# Linking the program
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Compilation rule for object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
# Clean object files and executable
clean:
	rm -rf $(OBJ_DIR)

# Remove all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re