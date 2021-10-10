#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
        int weight;

    public:
        person(int w)
        {
            weight = w;
        }

        void printWeight()
        {
            cout << "The weight of the person is " << weight;
        }

        void operator--()   // This operator overloading function is used when operating pre-decrement
        {
            --weight;
        }

        void operator--(int)    // This operator loading  function is used when operatin post-decrement
        {
            weight--;
        }


};


int main()
{
    person Harry(99);

    --Harry;

    Harry--;

    Harry.printWeight();
}