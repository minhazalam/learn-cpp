// program to find factorial of a given number

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter a number : ";

    int num;
    cin >> num;

    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << num << " : " << factorial << endl;

    return 0;
}