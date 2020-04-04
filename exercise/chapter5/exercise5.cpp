#include <iostream>

int main()
{
    using namespace std;
    const int size = 20;
    char * ptr[12];
    int arr[12];
    int result = 0;
    for (int i = 0; i < 12; i++)
    {
        ptr[i] = new char[size];
        cout << "Enter the Month: ";
        cin.getline(ptr[i], size);
        cout << "Enter the worth of monthly sales: ";
        cin >> arr[i];
        cin.get();
    }

    cout << "\tMonth\t" << "Monthly Sales\n";
    for (int i = 0; i < 12; i++)
    {
        cout << "\t" << ptr[i] << "\t" << arr[i] << endl;
        result += arr[i];
    }
    
    cout << "Total sales for the year = " << result << endl;
    delete [] ptr;
    return 0;
    
}