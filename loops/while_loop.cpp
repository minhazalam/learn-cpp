// program to print even numbers using while and do while loop

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter upto which number even nos should be printed\n";
    int n;
    cin >> n;

    int i = 2;

    while (i <= n)
    {
        cout << i << endl;
        i += 2;
    }
    return 0;
}