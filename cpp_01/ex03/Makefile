# COLORS
RESET	= "\033[0m"
RED 	= "\033[31m"
GREEN	= "\033[32m"

# MAIN
CXX = c++
NAME = human
RM = rm -f

# FLAGS
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

# SRC FILES AND OBJECTS
SRCS =	src/main.cpp \
		src/HumanA.cpp \
		src/HumanB.cpp \
		src/weapon.cpp
		
OBJS = $(SRCS:.cpp=.o)

# VPATH to specify where to find source files
VPATH = src

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"...linking $(NAME)..."$(RESET)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Rule to compile .cpp files into .o files, retaining directory structure
src/%.o: src/%.cpp
	@echo $(GREEN)"...compiling $<..."$(RESET)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo $(RED)"...cleaning object files..."$(RESET)
	$(RM) $(OBJS)

fclean: clean
	@echo $(RED)"...cleaning $(NAME)..."$(RESET)
	$(RM) $(NAME)

re: fclean all
