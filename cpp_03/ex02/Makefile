# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = ScavTrap

# Source files
SRCS = src/ClapTrap.cpp src/main.cpp src/ScavTrap.cpp src/FragTrap.cpp

# Object files (generated from SRCS)
OBJS = $(SRCS:.cpp=.o)

# Color codes
GREEN = \033[1;32m
RESET = \033[0m

# Rule to create the executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation successful [OK]$(RESET)"

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Rebuild the entire project
re: fclean $(NAME)

# Specify targets that aren't files
.PHONY: all clean fclean re
