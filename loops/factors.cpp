// finds the factor of the given number

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the number : ";

    int num;
    cin >> num;

    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            //cout << i << endl; //prints factors
            sum += i;
        }
    }

    cout << "sum of factors : " << sum<<endl;

    return 0;
}