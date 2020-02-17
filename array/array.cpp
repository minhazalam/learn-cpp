// program to show the working of an array
// declaration and traversal

#include<iostream>

using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}