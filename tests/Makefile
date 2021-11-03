CC = gcc
CCFLAGS = -Wall -Werror -Wextra 
INCLUDE = -I.

SRC		= test.c 
EXEC 	= test
LIB_DIR = ..
LIB		= ft

all: $(EXEC)

$(EXEC):
	$(CC) $(CCFLAGS) -o test test.c -L$(LIB_DIR) -l$(LIB)

mem: test_mem.c
	echo sdk
	$(CC) $(CCFLAGS) -o mem test_mem.c -L$(LIB_DIR) -l$(LIB)

debug: CCFLAGS += -g
debug: all

clean:
	rm -f test 
	rm -f mem 

fclean: clean
	rm -f $(EXEC)

.PHONY: all clean fclean debug
