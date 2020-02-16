// program to find armstrong number 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << "Enter number : ";

    int num;
    cin>>num;

    int temp = num;

    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;

        cout << "digits are : " << rem << endl;

        sum += pow(rem, 3);
    }

    cout << "Sum : " << sum<<endl;

    if (temp == sum)
    {
        cout << "Number is armstrong number\n";
    }
    else
    {
        cout << "not an armstrong number\n";
    }
    

    return 0;
}