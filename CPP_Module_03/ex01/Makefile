NAME = ScavTrap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRCS = main.cpp \
	   ClapTrap.cpp \
	   ScavTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

HEADERS = ClapTrap.h \
		  ScavTrap.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all cleann fclean re