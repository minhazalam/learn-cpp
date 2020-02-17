// shows working of references in cpp

#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    // reference
    int &y = x; //must be init when declared

    cout << x << endl;

    x++;

    cout << ++y << endl;

    cout << &x << endl;
    cout << &y << endl;

    if (&x == &y)
    {
        cout << "addresses are equal \n";
    }
    else
    {
        cout << "not equal\n";
    }
    

    return 0;
}