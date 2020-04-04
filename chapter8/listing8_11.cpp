// funtemp.cpp -- using a function template
#include <iostream>
// functions template prototype
template <typename T>	// or class T
void Swap(T &a, T &b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Using compiler-generated int swapper:\n";
	Swap(i,j);	// generate void Swap(int &, int &)
	cout << "Now i, j = " << i <<", " << j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << endl;
	cout << "Using compiler-generated int swapper:\n";
	Swap(x,y);	// generate void Swap(double &, double &)
	cout << "Now x, y = " << x <<", " << y << endl;
	// cin.get()
	return 0;
}


// function template definition
template <typename T>
void Swap(T &a, T &b)
{
	T temp;		// temp a variable of type T
	temp = a;
	a = b;
	b = temp;
}
