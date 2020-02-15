//  working with increment and decrement operators
//  there are two types of inc and dec operators
//  a) pre
//  b) post

#include<iostream>

using namespace std;

int main()
{
    int i, j, k;
    cin >> i >> k; // 4, 5

    j = i++ + k;
    cout << j << endl; //9

    j = i + k;
    cout << j << endl; // 10

    return 0;
}