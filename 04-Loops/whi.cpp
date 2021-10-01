#include<iostream>

using namespace std;

int main()
{
    int num = 0;
    int i = 1;

    cout << "Enter the number: ";
    cin >> num;

    while(i<= 10)
    {
        cout << endl << num << " * " << i << " = " << num * i;

        i++;
    }

    return 0;
}