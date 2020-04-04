#include <iostream>
#include <cmath>

double invest(double balance, int year, double interest);
int main()
{
    using namespace std;
    double D = 100.0, C = 100.0;
    int i = 0;
    while (C <= D)
    {
        i++;
        D = invest(100.0, i, 0.1);
        C = invest(C, i, 0.05);
        cout << "Daphne's balance at year #" << i << ": " << D << endl;
        cout << "Cleo's balance at year #" << i << ": " << C << endl;
    }
    cout << "After " << i << " years, Cleo's investment exceed Daphne's.\n";
    return 0;
}

double invest(double balance, int year, double interest)
{
    using namespace std;
    double result;
    result = balance * interest * year + balance;
    return result;
}