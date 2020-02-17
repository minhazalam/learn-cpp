// finding max element in an array

#include<iostream>

using namespace std;

int main()
{
    cout << "Enter size of an array : ";

    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // taking input
    }

    for (int i = 0; i < size; i++)
    {
        // displaying array elements
        cout<< "Array [" << i << "]" << " : " << arr[i] << endl;
    }

    int max = arr[0]; // first elemnt as max

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) // checking if arr element is greater or not
        {
            max = arr[i];
        }
    }

    // returning max element
    cout<<"Maximum element : " << max << endl;


    return 0;
}