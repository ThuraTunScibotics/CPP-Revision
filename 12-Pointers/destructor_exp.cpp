#include<iostream>
using namespace std;

class Test
{
    private:
    int *age;
    public:
        Test()
        {
            age = new int();
            *age = 0;
            cout << "NP-Constructor" << endl;
        }

        Test(int x)
        {
            age = new int();
            *age = x;
            cout << "P-Constructor" << endl;
        }

        ~Test()
        {
            cout << "Destructor" << endl;
        }
};

int main()
{
    Test obj1;
    Test obj2(9);
    
    return 0;
}