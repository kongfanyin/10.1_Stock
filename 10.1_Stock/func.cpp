#define _CRT_SECURE_NO_WARNINGS 1
#include"stock.h"
#include<string>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
void Stock::acquire(const string &co, long n, double pr)//初始化，第一次购买
{
	company = co;
	if (n < 0)
	{
		cout << "Number of shares can not be negtive" << company << "shares set to 0\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	shares_val = pr;
	SetTotal();
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased can not be negtive." << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		shares_val = price;
		SetTotal();
	}
}
void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares selled can not be negtive." << "Transaction is aborted.\n";
	}
	else if(num>shares)
	{
		cout << "you can't sell more than you have!"<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		shares_val = price;
		SetTotal();
	}
}
void Stock::update(double price)
{
	shares_val = price;
	SetTotal();
}
void Stock::show()
{
	using std::ios_base;
	//set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "company:" << company << "\n" << "shares: " << shares << "\n"
		<< "share price: " << shares_val << "\n";
	//set format to #.##
	cout.precision(2);
	cout<< "Total worth: " << total_val << endl;

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
inline void Stock::SetTotal()
{
	total_val = shares * shares_val; 
}