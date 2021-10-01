#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1, str2;
    int len1, len2;

    cout << "Enteer string 1: ";
    cin >> str1;
    len1 = str1.length();

    cout << endl << "Enter string 2: ";
    cin >> str2;
    len2 = str2.length();

    if (len1 == len2)
    {
        cout << endl << "Strings' length are equal!!!";
    }

    else
    {
        cout << "Strings' length are not equal!!!";
    }

    return 0;
}