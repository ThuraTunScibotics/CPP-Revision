#include<iostream>
using namespace std;

int main()
{
    int var1 = 10, var2 = 20;

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    cout << "Answer is " << (*ptr1)/(*ptr2);

    return 0;
}