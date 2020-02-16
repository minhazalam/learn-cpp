// finds prime number
// if factors of that number is two only then it is a prime number
// otherwise not becoz prime number is divisible by 1 and itself

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number : ";

    int num;
    cin >> num;

    int count=0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Prime number\n";
    }
    else
    {
        cout << "Not a prime number\n";
    }

    return 0;
    
}