#include<iostream>

using namespace std;

int main()
{
    int num = 0;
    int i = 1;

    cout << "Enter the number: ";
    cin >> num;

    do
    {
        cout << endl << num << " * " << i << " = " << num * i;

        i++;
    }while(i<= 10);

    return 0;
}