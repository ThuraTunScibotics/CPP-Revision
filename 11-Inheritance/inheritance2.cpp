/* Constructor and Inheritance Part1 */
#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout << "Default constructor of base class" << endl;
        }

        base (int b)
        {
            cout << "Para constructor of base class" << b << endl;
        }
};

class derived : public base
{
    //Empty
};

int main()
{
    derived d;      // **we can't call the parameterized constructor of base class, we can just call default constructor of base class

    return 0;
}