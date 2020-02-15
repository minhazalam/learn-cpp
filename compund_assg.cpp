// program to demonstrate compound assignment

#include<iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    //compound statement
    y += x; // y = y + x

    cout << y << endl;

    return 0;
}