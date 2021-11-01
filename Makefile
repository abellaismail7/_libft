CC		= cc
CCFLAGS = -Wall -Wextra -Werror
NAME	= libft.a
INCLUDE = -I./include
AR		= ar
ARFLAGS = rc

FILES 	= ft_alpha
S_DIR	= src
B_DIR	= build
SRC		= $(addprefix $(S_DIR)/, 	$(FILES:=.c))
OBJ		= $(addprefix $(B_DIR)/, 	$(FILES:=.o)

all: $(NAME)

$(NAME):
	$(AR) $(ARFLAGS) $(LIB) $(OBJ)


$(B_DIR)/%.o: $(S_DIR)/%.c
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
