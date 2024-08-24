# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# Output binary
TARGET = brain

# Source files
SRC = main.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Color codes
GREEN = \033[0;32m
RESET = \033[0m

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)
	@echo "$(GREEN)Compilation successful!$(RESET)"

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(TARGET)

# Remove all build artifacts and temporary files
fclean: clean

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

