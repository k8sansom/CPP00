# Target executable name
NAME = megaphone

# Compiler and compiler flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

# Source files
SRCS = megaphone.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target (all)
all: $(NAME)

# Linking the program
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compilation rule for object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -rf $(OBJS)

# Remove all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re