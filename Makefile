

all: inttest

inttest: itoa.o atoi.o main.c test.h
	$(CC) -Wall main.c atoi.o itoa.o -o $@

atoi.o: atoi.c
	$(CC) -Wall -c $<

itoa.o: itoa.c
	$(CC) -Wall -c $<

clean:
	$(RM) atoi.o main.o itoa.o inttest

