#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    int ArSize = 20, count = 0;
    char word[ArSize];
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (strcmp(word, "done"))
    {
        count ++;
        cin >> word;
    }
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}