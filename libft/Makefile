NAME = libft.a
SOURCES = ft_atoi.c 
OBJECTS = $(SOURCES:.c=.o)                                                  
                                                                                 
CC = gcc                                                                         
CFLAGS = -Wall -Wextra -Werror                                           
INCLUDE = -I include                                                            
RM = rm -rf                                                                     
all: $(NAME)
$(NAME) : $(OBJECTS)
    ar rcs $(NAME) $(OBJECTS)
%.o: %.c
    $(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@                        
clean:                                                                          
    $(RM) $(OBJECTS)
        
fclean: clean
    $(RM) $(NAME)
.PHONY: all clean fclean