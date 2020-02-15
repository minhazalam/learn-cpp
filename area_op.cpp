/* Program to print area of a triangle */

#include<iostream>

using namespace std;

int main()
{
    int base, height;
    float area_triangle;

    cout << "Enter base :\n";
    cin >> base;

    cout << "Enter height : \n";
    cin >> height;

    area_triangle = (float) (base * height * .5);

    //prints area of triangle

    cout << "Area of triangle : " << area_triangle << endl;

    return 0;
}