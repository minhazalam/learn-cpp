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

    //cout << "sum of factors : " << sum<<endl;

    int temp = 2 * num;

    if (temp == sum)
    {
        cout << "Perfect number\n";
    }
    else
    {
        cout << "Not a perfect number\n";
    }
    

    return 0;
}