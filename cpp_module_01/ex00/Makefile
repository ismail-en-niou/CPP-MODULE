NAME = Zombie
cc = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp main.cpp  newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(cc) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(cc) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re