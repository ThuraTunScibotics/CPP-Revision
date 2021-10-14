#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:
        int age;
        string name;

    public:
        Person(int age, string name)
        {
            this->age = age;
            this->name = name;
        }

        void getInfo()
        {
            cout << "Age is " << age << endl;
            cout << "Name is " << name << endl;
        }
};

int main()
{
    Person p(23, "Sancho");

    p.getInfo();

    return 0;
}