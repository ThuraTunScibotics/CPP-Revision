/* function with return and with argument input */

#include <iostream>
using namespace std;

int func(int);

int main()
{
    int value, answer;
    
    cout << "Enter the value: ";
    cin >> value;

    answer = func(value);

    cout << "The answer of the function is: " << answer;
    
    return 0;
}

int func(int x)
{
    x = x * x;
    return x;
}