#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
	char dross[20];
	int slag;
};

const int BUF = 2;

int main()
{
	using namespace std;
	chaff * buffer = new chaff [BUF];
	chaff * p1;
	p1 = new (buffer) chaff [2];

	strcpy(p1->dross, "abbcc");
	p1->slag = 10;
	strcpy((p1+1)->dross, "bbbdd");
	(p1+1)->slag = 20;

	for (int i = 0; i < BUF; i++)
	{
		cout << "chaff #" << i+1 << ":\n";
		cout << "Dross: " << p1[i].dross << endl;
		cout << "Slag: " << p1[i].slag << endl;
	}
	delete [] buffer;
	return 0;

}
