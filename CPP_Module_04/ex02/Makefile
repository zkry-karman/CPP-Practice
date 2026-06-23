NAME = ..WorldOnFire

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRCS = main.cpp \
	   AAnimal.cpp \
	   Cat.cpp \
	   Dog.cpp \
	   WrongAnimal.cpp \
	   WrongCat.cpp \
	   Brain.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = AAnimal.h \
		  Cat.h \
		  Dog.h \
		  WrongAnimal.h \
		  WrongCat.h \
		  Braiin.h

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