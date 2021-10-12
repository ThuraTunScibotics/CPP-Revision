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
            cout << "Parameterized constructor of base class" << endl;
        }
};

class derived : public base
{
    public:
        derived()
        {
            cout << "Default constructor of derived class" << endl;
        }

        // The parameterized constructor of base class isn't call in previous eg.
        // To call this, we need to implement like this
        derived(int d) : base(d)        
        {
            cout << "Parameterized constructor of derived class" << endl;
        }
};

int main()
{
    derived d(9);

    return 0;
}