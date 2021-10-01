/* function without return and without argument input */

#include <iostream>
using namespace std;

void func(void);

int main()
{
    func();
    return 0;
}

void func(void)
{
    cout << "Hello!";
}