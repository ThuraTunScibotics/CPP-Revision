/*
Non Parameterized Constructor OR Default Constructor
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    float height;
    
public:
    Person()            // non-parameterized constructor
    {
        name = "Null";
        age = 0;
        height = 0.0f;
    }

    void getData()
    {
        cout << endl << "Name " << name;
        cout << endl << "Age " << age;
        cout << endl << "Heigiht" << height;
    }
};

int main()
{
    Person obj;

    obj.getData();

    return 0;
}