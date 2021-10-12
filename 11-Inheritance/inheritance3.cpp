/* Constructor and inheritance Part2 */
#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout << "Default constructor of base class" << endl;
        }

        base(int b)
        {
            cout << "Parameterized constructor of base class" << b << endl;
        }
};

class derived : public base
{
    public:
        derived()
        {
            cout << "Default constructor of derived class" << endl;
        }

        derived(int d)
        {
            cout << "Parameterized constructor of derived class" << d << endl;
        }
};

int main()
{
    cout << "!While create object without parameter!" << endl;
    derived d;      // this will call default constructor of base and derived class

    cout << endl << "!While create object with parameter!" << endl;
    derived d1(9);      // this will call default constructor of base class and parameterized constructor of derived class
                        // Note: default constructor of base class is called in both condition 

    return 0;
}