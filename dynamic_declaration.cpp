// program to show working of dynamic declaration
// supported in c++17

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    //int c = a + b; //accessed globally

    /* but if we want to limit the access to that block only */
    if (int c = a+b; c > a) //can be declared in if statement itself
    {
        cout << "greater\n";
    }
    cout << c << endl; //can be accessed if declared globally

    return 0;
}