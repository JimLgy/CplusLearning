#include <iostream>
const int Max = 10;
int Fill_array(double ar[], int limit);
void Show_array(const double ar[], int limit);
void Reverse_array(double ar[], int limit);

int main()
{
	using namespace std;
	double sample[Max];
	cout << "Please Fill in the array upto " << Max  << " elements.\n";
	int size = Fill_array(sample, Max); 
	cout << "The array you created: \n";
	Show_array(sample, size);
        Reverse_array(sample, size);
	cout << "The reversed array: \n";
	Show_array(sample, size);
	cout << "Let's reverse the array except for the first and the last element.\n";
	Reverse_array(sample + 1, size - 2);
	Show_array(sample, size);
	
	return 0;
	
}

int Fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i = 1;
	cout << "Enter element #1: ";
	while(cin >> temp && i <=limit)
	{
		cout << "Enter element #" << i+1 << ": ";
		ar[i-1] = temp;
		i++;
	}
	return i-1;
}

void Show_array(const double ar[], int limit)
{
	using namespace std;
	cout << "Here is our final array: \n";
	for (int i = 0; i < limit; i++)
		cout << "Element number #" << i+1 << ": " << ar[i] << endl;
}

void Reverse_array(double ar[], int limit)
{
	double temp;
	int count;
	if (limit >= 1 && 0 == limit % 2)
		count = limit/2;
	else if (limit >=1 && 1 == limit % 2)
		count = (limit-1)/2;
	for (int i = 0; i < count; i++)
	{
		temp = ar[i];
		ar[i] = ar[limit-1-i];
		ar[limit-1-i] = temp;
	}
}
