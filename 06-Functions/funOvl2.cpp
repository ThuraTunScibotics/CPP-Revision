#include<iostream>
using namespace std;

void add(int, int);
void add(int, int, int);

int main()
{
    add(3, 4);
    add(1, 2, 3);

    return 0;
}

void add(int x, int y)
{
    cout << "The sun of 2 numbers is: " << x + y;
}

void add(int x, int y, int z)
{
    cout << endl << "The sum of 3 numbers is: " << x + y + z;
}