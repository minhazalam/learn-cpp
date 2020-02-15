// program to show bit wise operators

#include<iostream>
using namespace std;

int main()
{
    int x = 10, y;

    y = x << 2;

    cout << "y : " << y<<endl; // 40

    y = x >> 1;
    cout << "y : " << y <<  endl; // 5

    return 0;
}