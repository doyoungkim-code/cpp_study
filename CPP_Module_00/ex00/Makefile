NAME = megaphone

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = megaphone.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))
LIBFT_OBJS = $(patsubst %.cpp, %.o, $(LIBFT_SRCS))

.PHONY: all clean fclean re

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(LIBFT_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_OBJS)

clean :
	$(RM) $(OBJS) $(LIBFT_OBJS)
fclean : clean
	$(RM) $(NAME)

re: fclean all
