##
## EPITECH PROJECT, 2021
## Makfile Lib
## File description:
## Makefile
##

CC = gcc
CFLAGS = -W -Wextra -Werror -I ../include/

LIB_SRC = $(wildcard *.c)
LIB_OBJ = $(LIB_SRC:.c=.o)

TARGET_LIB = libmy.a

all: $(TARGET_LIB)

$(TARGET_LIB):
	@ $(CC) -c $(LIB_SRC) $(CFLAGS)
	@ ar src $(TARGET_LIB) $(LIB_OBJ)

clean:
	@ rm -rf $(LIB_OBJ)

fclean: clean
	@ rm -rf $(TARGET_LIB)

re: fclean all