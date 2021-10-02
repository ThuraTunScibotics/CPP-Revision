#include<iostream>
#include<string>
using namespace std;

struct person           // definiation of the structure
{
    string name;
    int age;
    float weight;
    float height;
    double salary;
};

int main()
{
    person pVar;

    // store data in user defined data type

    pVar.name = "TR Tun";
    pVar.age = 27;
    pVar.weight = 115.9f;
    pVar.height = 5.8f;
    pVar.salary = 900000.75;

    // access Data , Modify data

    pVar.salary = 1000000;

    // print data of user defined datatype

    cout << endl << "Name: " << pVar.name;
    cout << endl << "Age: " << pVar.age;
    cout << endl << "Height: " << pVar.height;
    cout << endl << "Weight: " << pVar.weight;
    cout << endl << "Salary: " << pVar.salary;

    return 0;
}