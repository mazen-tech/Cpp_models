CXX = c++
NAME = Zombie
RM = rm -f


#flages 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic


SRCS = src/main.cpp \
			src/newZombie.cpp \
			src/randomChump.cpp \
			src/Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"...linking $(NAME)..."$(RESET)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@echo $(GREEN)"...compiling $<..."$(RESET)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo $(RED)"...cleaning $(NAME) object files..."$(RESET)
	$(RM) $(OBJS)

fclean: clean
	@echo $(RED)"...cleaning $(NAME)..."$(RESET)
	$(RM) $(NAME)

re: fclean all
		