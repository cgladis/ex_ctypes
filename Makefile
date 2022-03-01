SRC = ex_lib.c

CC = gcc

all:
	gcc -c -Wall -Werror -Wextra -fpic $(SRC)
	gcc -shared -o ex_lib.so ex_lib.o

#clib1.so: clib1.o
#    gcc -shared -o libclib1.so clib1.o
#
#clib1.o: clib1.c
#    gcc -c -Wall -Werror -fpic clib1.c