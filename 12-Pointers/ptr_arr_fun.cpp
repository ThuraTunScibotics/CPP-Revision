#include<iostream>
using namespace std;

const int MAX = 5;
void printArray(int *ptr);

int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50};

    cout << "arr is " << arr << endl;

    printArray(arr);    // we can also use arrr[0]

    return 0;
}

void printArray(int *ptr)
{
    cout << "*ptr is " << *ptr <<endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Array at " << i << " is " << *ptr++ << endl;
    }
}