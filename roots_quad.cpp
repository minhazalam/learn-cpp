//  program finds roots of a quadratic eqn

// a quad eqn looks like ax^2 + bx + c = 0
//  we will apply root = (-b + sqrt (pow (b, 2) - 4* a*c)) / (2*a)

#include<iostream>

//header file to use maths operations
#include<cmath>

using namespace std;

int main()
{
    int a, b, c;
    float root_1, root_2;

    cout << "a ";
    cin >> a;

    cout << "b ";
    cin >> b;

    cout << "c ";
    cin >> c;

    root_1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    root_2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);

    cout << "frist root of the quad eqn : " << root_1 << endl;
    cout << "second root of the quad eqn : " << root_2 << endl;

    return 0;
}