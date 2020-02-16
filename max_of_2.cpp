/* program shows the working of if-else conditional statement */
// In this  program we'll find out max of two numbers

#include<iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers\n";

    int x, y;

    cin >> x >> y;


    //condition to check which one is greater
    if (x > y) // if true
    {
        //execute this statement
        cout << "Max value : " << x << endl;
    }
    else // if false
    {
        // execute this
        cout << "Max value : " << y << endl;
    }

    return 0;
    
}