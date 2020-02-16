// program to find nature of roots
// if b^2-4ac < 0 negative roots
// if b^2-4ac = 0 equal roots
//if b^2-4ac > 0 real roots

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b , c;

    cout << "Enter a : ";
    cin >>a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;
    //cin >>a >>b >>c;

    // root
    float root = pow(b, 2) - 4*a*c;

    if (root >= 0)
    {
        cout << "Real roots\n";
    }
    else
    {
        cout << "Imaginary roots\n";
    }
    
    return 0;
    
}