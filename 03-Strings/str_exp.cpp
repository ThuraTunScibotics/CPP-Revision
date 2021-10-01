#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name, last_name, address;

    cout << "Enter your address: ";
    getline(cin, address);

    cout << endl << "Enter your first name: ";
    cin >> first_name;

    cout << endl << "Enter your last name: ";
    cin >> last_name;

    string full_name = first_name + " " + last_name;
    cout << endl << full_name << endl << address ;

    return 0;

}