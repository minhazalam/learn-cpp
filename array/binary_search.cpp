// binary search program
// by dividing the search space in two halves
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

    int key;
    cout << "Enter key : ";
    cin >> key;
    // linear search
    /* for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Key is present at : " << i << endl;
            return 0;
        }
    } */

    // binary search
    int low = 0, high = size, mid;

    while (low < high)
    {
        mid = (low + high) / 2;

        if (key == arr[mid])
        {
            cout << "Element presesnt at : " << mid << endl;
            return 0;
        }
        else if (mid < key)
        {
            low = mid + 1; // right half
        }
        else
        {
            high = mid -1 ; // left half
        }
        
    }
    //cout << "Element not present in the array\n";

    cout << "Key not found in the array\n";

    return 0;
}