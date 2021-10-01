#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter the number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is even.";
    }

    else if (num % 2 != 0)
    {
        cout << "The number is odd";
    }

    return 0;
}