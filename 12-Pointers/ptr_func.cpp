#include<iostream>
using namespace std;

void Square(int *ptr);

int main()
{
    int number = 10;

    cout << "Before " << number << endl;

    Square(&number);

    cout << "After " << number << endl;

    return 0;
}

void Square(int *ptr)
{
    cout << " *ptr is " << *ptr << endl;

    int tmp = *ptr;

    cout << "tmp is " << tmp << endl;

    tmp = tmp * tmp;

    *ptr = tmp;
}