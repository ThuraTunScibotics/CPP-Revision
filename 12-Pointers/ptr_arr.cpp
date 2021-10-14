#include<iostream>
using namespace std;

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50};

    int *ptr = arr;     // or use &arr[0]

    cout << "*ptr = arr is " << *ptr << endl; 
    cout << "arr is " << arr << endl;
    cout << "ptr is " << ptr << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Value at " << i << " is " << *(ptr + i) << endl;
    }

    return 0;
}