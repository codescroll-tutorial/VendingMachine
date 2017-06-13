#include "beverage.h"

#include <stdio.h>
#include <string.h>

#define BEVERAGE_MAX_AMOUNT 10

void initBeverage(beverage *b, beverageKind kind, char* name, unsigned int price)
{
	b->kind_ = kind;
	strcpy(b->name_, name);
	b->price_ = price;
	b->amount_ = 10;
}

unsigned char isSoldOut(unsigned int amount)
{
	if ( amount == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void refillBeverage(beverage* b)
{
	b->amount_ = BEVERAGE_MAX_AMOUNT;
}

void reduceBeverage(beverage* b)
{
	if ( !isSoldOut(b->amount_) )
	{
		refillBeverage(b);
	}
}