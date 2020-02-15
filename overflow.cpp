// program shows overflow concept of data types

#include<iostream>

using namespace std;

int main()
{
    char ch = 127;
    ++ch;

    cout << (int) ch << endl; // -128 kind of cyclic behaviour if overflow

    return 0;
}