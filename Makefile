CC=gcc

.PHONY: all
all:
	$(CC) -c main.c
	$(CC) -c beverage.c
	$(CC) -c vendingmachine.c
	$(CC) -o test.exe main.o beverage.o vendingmachine.o

rm:
	rm -f main.o beverage.o vendingmachine.o test.exe
