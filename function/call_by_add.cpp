// program shows the working of call by address
// by using pointers

#include<iostream>
using namespace std;

// func to swap two numbers
// pointers a & b stores addresses of x and y
void swap(int *a, int *b)
{
    int temp;

    temp= *a;
    *a= *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Enter vlues of x & y : ";
    cin >>x>>y;

    // passing the addresses of x and y
    swap(&x, &y);

    cout << "x : " << x << " "<< "y " <<y<<endl;

    return 0;
}