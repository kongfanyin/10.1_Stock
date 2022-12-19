#define _CRT_SECURE_NO_WARNINGS 1

#include<string>
#include<fstream>
#include<iostream>
#include"stock.h"

int main(char argc, char** argv)
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("maotai", 100, 1600);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(20, 1200);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 1800);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(200000, 1688.56);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(200000, 1794.65);
	fluffy_the_cat.show();

	return 0;
}