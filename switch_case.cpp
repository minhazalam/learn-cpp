// program shows working of switch case
// used to write menu driven program

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter day number : ";
    
    int day;
    cin >> day;

    switch (day)
    {
        case 1 : cout <<"Monday\n";
            break; // if no break statement then program will go in fall thru condition
        case 2 : cout << "tues";
        break;

        case 3:
        cout << "wed";
        break;

        case 4:
        cout << "thurs";
        break;

        case 5:
        cout <<"fri\n";
        break;

        case 6:
        cout << "sat\n";
        break;

        case 7:
        cout << "sunday\n";
        break;

        default:
        cout << "Invalid day\n";
    }
    return 0;
}