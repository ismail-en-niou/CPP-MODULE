NAME = Animal

SRCS = AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  mail.cpp  MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)
HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp mail.hpp MateriaSource.hpp


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
