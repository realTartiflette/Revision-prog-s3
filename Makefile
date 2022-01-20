CC = gcc
CFLAGS = -g #-Wall -Wextra  | Si tu veux les meme flags que durant les partiels
DEPS = facto.o fibo.o bubble_sort.o int_palindrome.o mat_trans.o mat_mult.o combine_string.o

all: test

test: test.o 
	gcc $(CFLAGS) $(DEPS) test.o correction.o -o test
test.o: $(DEPS) correction.o
	gcc $(CFLAGS) -c test.c
correction.o: correction.h
	gcc $(CFLAGS) -c correction.c
facto.o: facto.h
	gcc $(CFLAGS) -c facto.c
fibo.o: fibo.h
	gcc $(CFLAGS) -c fibo.c
bubble_sort.o: bubble_sort.h
	gcc $(CFLAGS) -c bubble_sort.c
int_palindrome.o: int_palindrome.h
	gcc $(CFLAGS) -c int_palindrome.c
mat_trans.o: mat_trans.h
	gcc $(CFLAGS) -c mat_trans.c
mat_mult.o: mat_mult.h
	gcc $(CFLAGS) -c mat_mult.c
combine_string: combine_string.h
	gcc $(CFLAGS) -c combine_string.c

.PHONY: clean

clean:
	$(RM) test *.o
