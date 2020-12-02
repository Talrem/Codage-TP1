CC = gcc
CFLAGS = -W -Wall -g
LDFLAGS =

SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
AOUT = prog.exe

all : $(AOUT)

prog.exe : $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^ -lm
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean :
	@rm *.o
cleaner : clean
	@rm -lm $(AOUT)
