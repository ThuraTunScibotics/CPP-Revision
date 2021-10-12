#include<iostream>
using namespace std;

class base
{
    public:
        void Msg()
        {
            cout << "It is base class " << endl;
        }
};

class derived : public base
{
    public:
        void Msg()
        {
            cout << "It is a derived class " << endl;
            base::Msg();
        }
};

int main()
{
    derived d;
    d.Msg();

    return 0;
}