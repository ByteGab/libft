NAME = libft.a
CC = gcc                                                                         
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs
RM = rm -rf  
SOURCES = ft_isalpha.c ft_isdigit.c
OBJECTS = $(SOURCES:.c=.o)                                                 

all: $(NAME)

$(NAME): $(OBJECTS)

    $(AR) $(NAME) $(OBJECTS)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:                                                                          
    $(RM) $(OBJECTS)  

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re