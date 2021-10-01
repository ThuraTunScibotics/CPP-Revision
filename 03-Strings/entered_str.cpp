#include<iostream>
#include<string>

using namespace std;

int main()
{
    string club;

    cout << "Enter your favourite football club: ";
    getline(cin, club);

    cout << endl << "My favourite football club is " + club + ".";

    return 0;

}