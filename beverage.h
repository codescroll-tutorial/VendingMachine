#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

typedef enum beverageKind
{
	BEVERAGE_COKE = 0,
	BEVERAGE_PEPSI = 1,
	BEVERAGE_REDBULL = 2,
	BEVERAGE_FANTA = 3,
	BEVERAGE_SPRITE = 4,
	BEVERAGE_GATORADE = 5,
	BEVERAGE_MOUNTAINDEW = 6,
	BEVERAGE_DRPEPPER = 7
} beverageKind;

typedef struct beverage
{
	beverageKind kind_;
	char name_[16];
	unsigned int price_;
	unsigned int amount_;
} beverage;

void initBeverage(beverage* b, beverageKind, char* name, unsigned int price);
unsigned char isSoldOut(unsigned int amount);
void refillBeverage(beverage* b);
void reduceBeverage(beverage* b);

#endif /*__BEVERAGE_H__*/