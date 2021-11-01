CC = gcc
CCFLAGS = -Wall -Werror -Wextra 
INCLUDE = -I.

SRC		= test.c 
OBJ		= $(SRC:.c=.o)
EXEC 	= test
LIB_DIR = ..
LIB		= ft

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CCFLAGS) -o $(EXEC) $(OBJ) -L$(LIB_DIR) -l$(LIB)

$(OBJ) : $(SRC)
	$(CC) $(CCFLAGS) $(INCLUDE) -o $@ -c $<

debug: CCFLAGS += -g
debug: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

.PHONY: all clean fclean debug
