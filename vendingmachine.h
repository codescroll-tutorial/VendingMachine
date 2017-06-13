#ifndef __VENDINGMACHINE_H__
#define __VENDINGMACHINE_H__

#include "beverage.h"

typedef enum machineState
{
	POWER_OFF = 0,
	POWER_NOCHANGE,
	POWER_ON,	
} machineState;

typedef struct vendingMachine 
{
	machineState state_;
	unsigned int change_;
	unsigned int inputedMoney_;
	beverage* bevarges_;
} vendingMachine;

void initMachine(vendingMachine* machine);
void printMenu(vendingMachine* machine);
void inputMoney(vendingMachine* machine, unsigned int money);
void buyBevarage(vendingMachine* machine, unsigned short num);
unsigned char isAlrightInput(int num);
unsigned int getChange(unsigned int inputedMoney, unsigned int price);
unsigned int isPossibleBuy(unsigned int inputedMoney, unsigned int price); /* Not implementd */

#endif /*__VENDINGMACHINE_H__*/