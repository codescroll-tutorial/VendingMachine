#include "vendingmachine.h"
#include <stdio.h>
#include <stdlib.h>

#define BEVERAGE_COUNT 8

void initMachine(vendingMachine* machine)
{
	beverage *beverages;
	machine->state_	= POWER_ON;
	machine->change_	= 1000;
	machine->inputedMoney_ = 0;

	beverages = (beverage *)malloc(sizeof(beverage) * BEVERAGE_COUNT);
	machine->bevarges_ = beverages;
	initBeverage(&beverages[0], BEVERAGE_COKE, "coke", 5);
	initBeverage(&beverages[1], BEVERAGE_PEPSI, "pepsi", 4);
	initBeverage(&beverages[2], BEVERAGE_REDBULL, "red bull", 5);
	initBeverage(&beverages[3], BEVERAGE_FANTA,	"fanta", 3);
	initBeverage(&beverages[4], BEVERAGE_SPRITE, "sprite", 3);
	initBeverage(&beverages[5], BEVERAGE_GATORADE, "gatorade", 3);
	initBeverage(&beverages[6], BEVERAGE_MOUNTAINDEW, "mountain dew", 2);
	initBeverage(&beverages[7], BEVERAGE_DRPEPPER, "dr pepper", 6);
}

void printMenu(vendingMachine* machine)
{
	unsigned int i;
	for ( i = 0;i < BEVERAGE_COUNT; ++i )
	{
		printf("%02d. %12s - %01d$\n", i+1, machine->bevarges_[i].name_, machine->bevarges_[i].price_);
	}
}

void inputMoney(vendingMachine* machine, unsigned int money)
{
	machine->inputedMoney_ += money;
}

void buyBevarage(vendingMachine* machine, unsigned short num)
{
	unsigned int change;
	if ( isAlrightInput(num) )
	{
		if ( isPossibleBuy(machine->inputedMoney_, machine->bevarges_[num].price_) )
		{
			if ( isSoldOut(machine->bevarges_[num].amount_) )
			{
				printf("%s is sold out.\n", machine->bevarges_[num].name_);
			}
			else
			{
				reduceBeverage(&(machine->bevarges_[num]));
				change = getChange(machine->inputedMoney_, machine->bevarges_[num].price_);
				machine->inputedMoney_;
				machine->inputedMoney_ = 0;
			}
		}
	}
	else
	{
		printf("Wrong choice\n");
	}
}

unsigned int getChange(unsigned int inputedMoney, unsigned int price)
{
	/* Implementation Required */
}

unsigned char isAlrightInput(int num)
{
	/* Implementation Required */
	return 0;
}
