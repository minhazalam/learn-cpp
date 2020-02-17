// pointer to a function

#include<iostream>
using namespace std;

void display()
{
    cout << "Minhaz" << endl;
}

int main()
{
    void (*fp)(); // declaration

    fp = display; // initialise

    (*fp) (); // called

    return 0;
}