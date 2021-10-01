#include <iostream>
using namespace std;

void find(int);

int main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    find(number);

    return 0;
}

void find(int x)
{
    if(x % 2 == 0)
    {
        cout << endl << "The number you entered is even!";
    }

    else if(x % 2 != 0)
    {
        cout << endl << "The number you entered is odd!";
    }
}