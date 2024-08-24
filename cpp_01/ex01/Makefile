# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = src/main.cpp src/Zombie.cpp src/ZombieHorde.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = zombies

# Color codes
GREEN = \033[0;32m
RESET = \033[0m

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
	@echo "$(GREEN)Compilation successful!$(RESET)"
	@echo "$(GREEN)Execution successful!$(RESET)"

# Compile each source file to object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "Cleaned up build files."

# Remove all build files and the executable
fclean: clean
	rm -f $(TARGET)

# Rebuild everything
re: fclean all
