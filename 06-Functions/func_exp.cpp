#include <iostream>
using namespace std;

// function decleration
// return type name (input);
void func(int);

int main()
{
    int x = 5;

    func(x);

    return 0;
}

// function body
void func(int a)
{
    int b = 10;
    cout << a + b;
}