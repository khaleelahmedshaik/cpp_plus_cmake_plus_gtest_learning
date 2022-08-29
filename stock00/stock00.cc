#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		std::cout << "Number of shares can't be negative\n";
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}
void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative\n";
	}
	else
	{
		shares += num;
	}
	share_val = price;
	set_tot();
}
void Stock::sell(long num, double price)
{
	if(num < 0)
	{
		std::cout<< "Number of shares can't be negative\n";
	}
	else if(num > shares)
	{
		std::cout << "You cna't sell more than you have\n";
	}
	else
	{
		shares -= num;
	}
	share_val = price;
	set_tot();
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
#if 0
void Stock::show()
{
	std::cout << "Company :" << company
			  << "Shares  :" << shares << '\n'
			  << "Share price : $" << share_val
			  << "Total worth : $" << total_val << '\n';
}
#endif
double Stock::show()
{
	return total_val;
}