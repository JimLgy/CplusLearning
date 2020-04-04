#include <iostream>
#include <string>
using namespace std;
struct car
{
    string make;
    int year;
};
int main()
{
    int size;
    cout << "How many cars do you wish to catalog?\n";
    cin >> size;
    cin.get();
    car * ptr = new car[size];
    for (int i = 0; i < size; i++)
    {
        //ptr[i] = new car;
        cout << "Car #" << i+1 << ": \n";
        cout << "Please enter the make: ";
        getline(cin, ptr[i].make);
        cout << "Please enter the year made: ";
        cin >> ptr[i].year;
        cin.get();
    }

    cout << "Here is your collection: \n";
    for (int i = 0; i < size; i++)
        cout << ptr[i]->year << " " << ptr[i]->make << endl;

    for (int i = 0; i < size; i++)
        delete ptr[i];
    return 0;
}