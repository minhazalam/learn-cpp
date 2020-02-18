// shows working of functions

#include<iostream>
using namespace std;

int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max (int a, int b, int c) // function overloading by passing diff number of parameters
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
    
}

int main()
{
    int a, b, c;
    cout << "Enter two numbers : ";
    cin >> a >> b >> c;

    cout << "Max of two numbers : " << max(a,b)<<endl;
    cout << "Max of two numbers : " << max(a,b,c)<<endl;

    return 0;
}