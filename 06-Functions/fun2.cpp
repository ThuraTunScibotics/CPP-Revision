/* function without return and with argument input */

#include <iostream>
using namespace std;

void func(int);

int main()
{
    int no;
    cout << "Enter C Ronaldo's kit number: ";
    cin >> no;

    func(no);

    return 0;
}

void func(int x)
{
    cout << endl << "Cristiano Ronaldo's kit number is: " << x;
}