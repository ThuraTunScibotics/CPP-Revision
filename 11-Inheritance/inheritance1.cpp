/* Write a program in which cuboid class inherit rectangle class and calculate area and volume */

#include<iostream>
using namespace std;

class rectangle
{
    public:
        int length;
        int breadth;

        void area()
        {
            cout << endl << "Area of rectangle is " << length * breadth;
        }
};

class cuboid : public rectangle         // Derived class
{
    public:
        int height;         // new feature

        void volume()       // Derived class can access both base and derived feature
        {
            cout << endl << "Volume of cuboid is " << length * breadth * height;         
        }
};

int main()
{
    cuboid c;

    c.length = 10; c.breadth = 20; c.height = 30;

    c.area();

    c.volume();

    return 0;
}