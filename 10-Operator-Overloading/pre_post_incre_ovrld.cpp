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

        void operator++()           // This operator overloading function is needed while doing pre-increment
        {
            ++weight;
        }

        void operator++(int)        // This operator overloacing function is neede while doing post-increment
        {
            weight++;
        }
};


int main()
{
    person John(78);

    ++John;  // this make increase to 79
    
    John++;     // this make increase to 80

    John.printWeight();

    return 0;
}