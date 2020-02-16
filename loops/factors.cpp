// finds the factor of the given number

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the number : ";

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}