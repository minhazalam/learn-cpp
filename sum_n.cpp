//progrsm to find sum of 'n' numbers

//include header files
#include<iostream>

using namespace std;

int main()
{
    int n, sum;

    cout << "Enter the value of n\n";

    cin >> n;

    sum = (n * (n + 1)) / 2; //according to precedence

    cout << "Sum of first n numbers : " << sum << endl;

    return 0;
}