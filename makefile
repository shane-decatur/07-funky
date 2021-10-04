all: main.o
	gcc -o funky main.o

main.o: main.c
	gcc -c main.c
