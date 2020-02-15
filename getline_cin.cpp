/* In this program we will learn about string
    and how to to take input
    -to read more than one word we will us
    getline function as shown below */

#include<iostream>
using namespace std;
int main()
{
    string name;
    
    cout << "May I know your name\n";//message to enter the name 

    //cin >> name; //read name in name variable
    /* Since cin only reads the first word so will use getline */

    getline(cin, name);

    cout << "Welcome Mr " << name << endl; //prints your name

    return 0;

}