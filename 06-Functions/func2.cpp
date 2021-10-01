/* function with return and without argument input */

#include <iostream>
using namespace std;

int func(void);

int main()
{
    int number;
    
    number = func();

    cout << "Rooney's kit number is: " << number;

    return 0;
}

int func()
{
    return 10;
}