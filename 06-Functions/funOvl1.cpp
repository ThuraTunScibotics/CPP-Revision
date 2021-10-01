#include<iostream>
using namespace std;

void add(int, int);
void add(float, float);
void add(string, string);

int main()
{
    add(3, 4);
    add(6.7f, 8.9f);
    add("Manchester", "United");

    return 0;
}

void add(int x, int y)
{
    cout << "Sum is: " << x + y; 
}

void add(float x, float y)
{
    cout << endl << "Sum is: " << x + y;
}

void add(string x, string y)
{
    cout << endl << "Sum is: " << x + y;
}