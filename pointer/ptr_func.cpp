#include<iostream>
using namespace std;

void max (int x, int y)
{
    if (x > y)
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }
    
}

void min (int x, int y)
{
    if (x < y)
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }
    
}

int main ()
{
    void (*fp) (int, int); //decl

    fp = max;

    (*fp) (10,24);

    fp= min;

    fp (30, 70);

    return 0;
}