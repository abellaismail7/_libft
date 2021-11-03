CC		= gcc
CCFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./include
AR		= ar
ARFLAGS = rc

SRC 	= $(wildcard *.c) 
B_DIR	= build
OBJ		= $(addprefix $(B_DIR)/, $(SRC:.c=.o))
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)


$(B_DIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CCFLAGS) $(INCLUDE) -o $@ -c $<

debug: CCFLAGS += -g
debug: all

clean:
	rm -f $(OBJ)
	rm -rf $(B_DIR)
	rm -rf $(TEST_EXEC)

fclean: clean
	rm -f $(LIB)

.PHONY: all clean fclean debug
