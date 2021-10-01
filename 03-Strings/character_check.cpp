#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch  <<" is lower case letter.";
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is upper case letter.";
    }

    else
    {
        cout << "Invalid Input";
    }

    return 0;
}