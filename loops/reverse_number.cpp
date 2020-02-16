// program to display the reverse  of a number

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";

    int num;
    int remainder;
    cin >> num;

    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;

        cout << remainder;
    }
    cout << endl;

    return 0;
}