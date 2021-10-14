#include<iostream>
using namespace std;

class Car
{
    private:
        int value;

    public:
        void setValue(int val)
        {
            value = val;
        }

        int getValue()
        {
            return value;
        }
};

class Tesla
{
    private:
        Car *ptr;
        int topSpeed;

    public:
        Tesla(int valu = 0, int tspeed = 0)
        {
            ptr = new Car;

            ptr->setValue(valu);

            topSpeed = tspeed;
        }

        int GetValue()
        {
            return ptr->getValue();
        }

        int GetSpeed()
        {
            return topSpeed;
        }

        ~Tesla()
        {
            delete ptr;
        }
};

int main()
{
    Tesla t(600, 400);

    cout << "Tesla value is " << t.GetValue() << endl;
    cout << "Top speed is " << t.GetSpeed() << endl;

    return 0;
}