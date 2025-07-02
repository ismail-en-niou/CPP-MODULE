NAME = Weapon
cc = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(cc) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(cc) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re