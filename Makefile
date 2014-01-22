
CC=gcc -Wall

all: test_code.exe

test_code.exe: test_code.o trapezoidal.o simpson.o
	$(CC) -o $@ test_code.o trapezoidal.o simpson.o -lm

clean:
	rm -f a.out *.exe *.o
