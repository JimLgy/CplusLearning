#include <iostream>
int main()
{
    using namespace std;
    int rows;
    cout << "Enter number of rows: ";
    (cin >> rows).get();
    for (int i = 0; i < rows; i++)
    {
        for (int n = 1; n <= rows; n++)
        {
            if (n >= (rows - i))
                cout << "*";
            else
                cout << ".";
        }
        cout << endl;
    }
return 0;
}