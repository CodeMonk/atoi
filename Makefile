

all: atoi

atoi: atoi.o main.c
	$(CC) -Wall main.c atoi.o -o atoi

atoi.o: atoi.c
	$(CC) -Wall -c atoi.c

clean:
	$(RM) atoi.o main.o atoi

