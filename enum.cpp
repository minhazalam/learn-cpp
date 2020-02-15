// enum used to store group of data under single name 

#include<iostream>
using namespace std;

enum day
{
    mon = 12, tue, wed, thur, fri, sat, sun
};

int main()
{
    day d;

    d = mon;

    cout << d << endl;

    d = fri;
    cout << d << endl;

    return 0;
}