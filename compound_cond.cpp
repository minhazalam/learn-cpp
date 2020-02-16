// program to to show the working of compund conditions
// AND
// OR
// NOT

#include <iostream>
using namespace std;

int main()
{
    cout<< "Enter hour : ";

    int hour;

    cin >> hour;

    if (hour >= 9 && hour <= 18)
    {
        cout << "It's a working hour\n";
    }
    else
    {
        cout << "leisure hour\n";
    }

    return 0;
    
}