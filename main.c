#include "vendingmachine.h"

int main()
{
	vendingMachine machine;
	initMachine(&machine);
	printMenu(&machine);
	inputMoney(&machine, 10);
	buyBevarage(&machine, 5);

	return 0;
}
