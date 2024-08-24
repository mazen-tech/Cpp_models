# COLORS
RESET	= "\033[0m"
GREEN	= "\033[32m"

# MAIN
CXX = c++
NAME = program
RM = rm -f

# FLAGS
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

# SRC FILES AND OBJECTS
SRCS = src/main.cpp src/replace.cpp
OBJS = $(SRCS:.cpp=.o)

# VPATH to specify where to find source files
VPATH = src

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"...linking $(NAME)..."$(RESET)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)"Compilation Successful: $(NAME) created!"$(RESET)

# Rule to compile .cpp files into .o files
src/%.o: src/%.cpp
	@echo $(GREEN)"...compiling $<..."$(RESET)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo $(GREEN)"...cleaning object files..."$(RESET)
	$(RM) $(OBJS)

fclean: clean
	@echo $(GREEN)"...cleaning $(NAME)..."$(RESET)
	$(RM) $(NAME)

re: fclean all
