// program to demonstrate the working of for loop

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter n : ";
    
    int n;
    cin >> n;

    // for (initialization; condition; updation)
    for (int i = 2; i <= n; i +=2)
    {
        cout<< i << endl;
    }
    return 0;
    
}