CC		= gcc
CCFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
AR		= ar
ARFLAGS = rc

MANDATORY	= memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit isalnum \
				isascii isprint toupper tolower strchr strrchr strncmp strlcpy strlcat strnstr \
				atoi calloc strdup substr strjoin strtrim split itoa strmapi putchar_fd putstr_fd \
				putendl_fd putnbr_fd striteri
BONUS		= lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap

M_OBJ	= $(MANDATORY:=.o)
B_OBJ	= $(BONUS:=.o)
NAME	= libft.a

all: $(NAME)

$(NAME): $(M_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(M_OBJ)

bonus: $(B_OBJ) $(M_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(M_OBJ) $(B_OBJ)

%.o: ft_%.c
	$(CC) $(CCFLAGS) $(INCLUDE) -o $@ -c $<

clean:
	rm -f $(M_OBJ)
	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus
