#pragma once
//stock class interface
//version 0.0
#ifndef STOCK00_H_
#define STOCK00_H_
using std::string;
#include <string>
class Stock
{
public:
	void acquire(const string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
private:
	std::string company;
	long shares;
	double shares_val;
	double total_val;
	void SetTotal() { total_val = shares * shares_val; };
};



#endif // !1

