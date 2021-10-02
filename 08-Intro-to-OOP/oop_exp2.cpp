#include<iostream>
#include<string>
using namespace std;


class house
{
private:
    int length, breadth;        //member variable

public:
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout << endl << length * breadth;
    }
};

int main()
{
    house h1, h2;
    
    h1.setData(5, 6);
    h1.area();

    h2.setData(7, 1);
    h2.area();

    return 0;
}