#include<iostream>
using namespace std;

class parent            // Abstract class
{
    public:
        virtual void show() = 0;    // pure virtual function
};

class boy : public parent
{
    public:
        void show()
        {
            cout << "Brown bun" << endl;
        }
};

class girl : public parent
{
    public:
        void show()
        {
            cout << "Pink bun" << endl;
        }
};

int main()
{
    parent *ptr;

    ptr = new boy();

    ptr->show();

    ptr = new girl();

    ptr->show();

    return 0;
}