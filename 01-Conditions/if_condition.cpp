#include <iostream>
using namespace std;

int main()
{
    int marks = 0;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 60 && marks <= 100)
    {
        cout << endl << "You are pass!!!";
    }

    else if (marks >= 0 && marks < 60)
    {
        cout << endl << "You are fail!!!";
    }

    else
    {
        cout << "Invalid Input";
    }

    return 0;

}