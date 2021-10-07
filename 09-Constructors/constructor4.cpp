/*
Constructor Overloading 
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
    Person(string name_a = "Null", int age_a = 0, float height_a = 0.0f)
    {
        name = name_a;
        age = age_a;
        height = height_a;
    }

    Person(Person &obj2)        // copy constructor, copy obj2
    {
        name = obj2.name;
        age = obj2.age;
        height = obj2.height;
    }

    void getData()
    {
        cout << endl << "Name " << name;
        cout << endl << "Age " << age;
        cout << endl << "Heigiht " << height;
    }
};

int main()
{
    Person obj1, obj2("TRTun", 23, 5.8), obj3(obj2);

    obj1.getData();
    obj2.getData();
    obj3.getData();

    return 0;
}