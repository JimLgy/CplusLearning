#include <iostream>
#include "sale.h"

int main()
{
	using namespace SALES;
	using namespace std;
	double ar_sale[3] = {8.8, 2.2, 7.3};
	Sales s1, s2;
	cout << "Sale s1:\n";
	setSales(s1, ar_sale, 3);
	showSales(s1);
	cout << "Sale s2:\n";
	setSales(s2);
	showSales(s2);
	return 0;
}
