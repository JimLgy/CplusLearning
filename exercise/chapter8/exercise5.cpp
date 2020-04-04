#include <iostream>

template <typename T>
T max5(const T arr[]);

int main()
{
	using namespace std;
	int a[5] = {1,89,30,23,93};
	double b[5] = {2.4, 9.4, 10.84, 12.23, 1.23};
	
	cout << "The largest int value: " << max5(a) << endl;

	cout << "The largest double value: " << max5(b) << endl;
	return 0;
}

template <typename T>
T max5(const T arr[])
{
	using namespace std;
	T temp = arr[0];
	for (int n = 1; n < 5; n++)
	{
		if (temp < arr[n])
			temp = arr[n];
	}
	return temp;
}
