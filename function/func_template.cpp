// program shows the working of function template
// if logic of the funtion is same 
// the only difference is return type
// In that case we can use function template

#include<iostream>
using namespace std;

//declaration of func template
template <class T>

T maxim (T a, T b) // func of template class declared
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{

    int i = maxim (10, 15); // int type called
    float f = maxim (12.3f, 21.6f); // float type called

    cout<< "Max : " << i << endl;

    cout << "Max : " << f << endl;

    return 0;
}