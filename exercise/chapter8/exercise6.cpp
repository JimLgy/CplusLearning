#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T* , int n);

template <>
char* maxn<char *>(char **, int n);

int main()
{
	int arr1[6] = {1, 5, 12, 63, 42, 55};
	double arr2[4] = {2.36, 5.88, 4.23, 7.89};
	char * arr3[3] = {"Hello my friend.", "my name is Jim", "What is your name?"};
	
	cout << "The largest int value in array 1 is " << maxn(arr1, 6) << endl;
	cout << "The largest double value in array 2 is " << maxn(arr2, 4) << endl;
	cout << "The longest string in array 3 is " << maxn(arr3, 3) << endl;
	return 0;
}

template <typename T>
T maxn(T* arr, int n)
{
	T temp;
	temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (temp < (arr[i]))
			temp = arr[i];
	}
	return temp;
}

template <> 
char* maxn<char*>(char * pt[], int n)
{
	int len;
	len = strlen(pt[0]);
	char * maxstr = pt[0];
	for (int i = 1; i < n; i++)
		if (len < strlen(pt[i]))
			maxstr = pt[i];
	return maxstr;
}
