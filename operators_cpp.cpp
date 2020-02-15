/* learning various operators */

#include<iostream>

using namespace std;

int main()
{
    //arithmatic
    int a, b, c;

    //message to enter two nos
    cout << "Enter number a and b\n";

    //read those nos
    cin >> a >> b;

    //add
    c = a + b;
    cout << "Addition os a and b : " << c << endl;

    //sub
    c = a - b;
    cout << "Difference :" << c << endl;

    //division
    c = a / b;
    cout << "div : " << c <<endl;

    ///multiply
    c = a * b;
    cout << "mult : " << c << endl;

    //remainder
    c = a % b;
    cout << "remainder : " << c << endl;

    //typecasting
    float f;
    f = (float) a / b;
    cout << "ans f : " << f <<endl;

    return 0;
}