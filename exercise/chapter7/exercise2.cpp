#include <iostream>
const int Max = 10;
int fill_array(int ar[], int limit);
void show_array(const int ar[], int n);
double meanscore(const int ar[], int n);

int main()
{
	using namespace std;
	int scores[Max];
	int size = fill_array(scores, Max);
	double mean = meanscore(scores, size);
	show_array(scores, size);
	cout << "The mean score is: " << mean << endl;
	return 0;
}

int fill_array(int ar[], int limit)
{
	using namespace std;
	int temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Please Enter score #" << i+1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
		{
			cout << "Input process complete!\n";
			break;
		}
		ar[i] = temp;
	}
	return i;
}

void show_array(const int ar[], int n)
{
	using namespace std;
	cout << "Scores:\n";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " "; 
	cout << endl;
}

double meanscore(const int ar[], int n)
{
	double mean;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += ar[i];
	}
	mean = total / n;
	return mean;
}
