#include<iostream>
using namespace std;

int main()
{
    int number = 10;        // assign int-value with variable number at some memory location

    int *ptr = NULL;        // creating or initializing pointer

    ptr = &number;          // assign pointer to memory address of number

    cout << "ptr: " << ptr << endl;         // to print memory address of ptr
    cout << "ptr: " << *ptr << endl;        // to print the value of ptr

    return 0;
}