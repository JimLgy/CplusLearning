#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the small integer: ";
    int x, y, total = 0;
    cin >> x;
    cout << "Enter the large integer: ";
    cin >> y;

    for (int i = x; i <= y; i++)
        total += i;
    cout << "The sum of all integers between " << x << " and " << y << " = " << total << endl;
    return 0;
}