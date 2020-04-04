#include <iostream>

int main()
{
    using namespace std;
    int i = 2;
    double x, result = 0.0;
    cout << "Enter value #1 (0 to quit): ";
    cin >> x;
    while(x != 0)
    {
        result += x;
        cout << "The cumulaive sum = " << result << endl;
        cout << "Enter value #" << i << " (0 to quit): ";
        cin >> x;
        i++;
    }
    cout << "Done.\n";
    return 0;
}