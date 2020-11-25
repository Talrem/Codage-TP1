all: tp1.o hadamard.o
	gcc -o prog.exe tp1.o hadamard.o

tp1.o: tp1.c
	gcc -o tp1.o tp1.c

hadamard.o: hadamard.c
	gcc -o hadamard.o hadamard.c
