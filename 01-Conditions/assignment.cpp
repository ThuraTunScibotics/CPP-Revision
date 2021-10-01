#include <iostream>
using namespace std;

void find_armg(int);

int main()
{
    int number;

    cout << "Enter 3-digit number: ";
    cin >> number;

    find_armg(number);

    return 0;
}

void find_armg(int original_number)
{
    int num, result = 0;
    num = original_number;

    while(num != 0)
    {
        int remainder =  num % 10;

        result += remainder * remainder * remainder;

        // removing the last digit
        num /= 10;
    }

    if (result == original_number)
    {
        cout << endl << "This number is Armstrong number!";
    }

    else if (result != original_number)
    {
        cout << endl << "This number is not Armstrong number!";
    }
}
