// program shows the basics of pointers

#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    // declaration
    int *p;
    
    //initialization
    p = &x; // stores address of x

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}