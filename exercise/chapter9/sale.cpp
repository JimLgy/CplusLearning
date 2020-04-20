#include <iostream>
#include "sale.h"

namespace SALES
{



	void setSales(Sales & s, const double ar[], int n)
	{
		using namespace std;
		int count, pos;
		double array[QUARTERS], temp, largest, lowest, average, total = 0.0;
		double artemp[n];
		for (int i = 0; i < n; i++)
		{
			artemp[i] = ar[i];
		}
		if (n > QUARTERS)
		{
			count = 4;
			for (int i = 0; i < count; i++)
			{
				temp = artemp[0];
				for (pos = 0; pos < n; pos++)
				{
					if (temp > artemp[pos])
						temp = artemp[pos];
				}
				//cout << temp << endl;
				for (pos = 0; pos < n; pos++)
					if (artemp[pos] == temp)
						break;
				if (pos < n)
				{
					n = n - 1;
					for (int j = pos; j < n; j++)
						artemp[j] = artemp[j+1];
				}
				array[i] = temp;
			}
		}
		if (n <= QUARTERS)
			for (int i = 0; i < QUARTERS; i++)
			{
				if (i < n)
					array[i] = artemp[i];
				else
					array[i] = 0.0;
			}
		lowest = array[0];
		largest = array[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			s.sales[i] = array[i];
			if (lowest > array[i])
				lowest = array[i];
			if (largest < array[i])
				largest = array[i];
			total += array[i];
		}
		s.max = largest;
		s.min = lowest;
		s.average = total / QUARTERS;
	}

	void setSales(Sales & s)
	{
		using std::cout;
		using std::cin;
		using std::endl;

		int i;
		double lowest, largest, total = 0.0;
		for (i = 0; i < QUARTERS; i++)
		{
			cout << "Enter Sales for Quater #" << i+1 << ": ";
			cin >> s.sales[i];
		}
		lowest = s.sales[0];
		largest = s.sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			if (lowest > s.sales[i])
				lowest = s.sales[i];
			if (largest < s.sales[i])
				largest = s.sales[i];
			total += s.sales[i];
		}
		s.max = largest;
		s.min = lowest;
		s.average = total / QUARTERS;
	}

	void showSales(const Sales & s)
	{
		using std::cout;
		using std::cin;
		using std::endl;
		cout << "Here is all information of Sales:\n";
		cout << "Sales for each quater: \n";
		for (int i = 0; i < QUARTERS; i++)
			cout << "Quater #" << i+1 << ": " << s.sales[i] << endl;
		cout << "Average: " << s.average << endl;
		cout << "Max: " << s.max << endl;
		cout << "Min: " << s.min << endl;
	}
}
