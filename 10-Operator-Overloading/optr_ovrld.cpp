#include<iostream>
#include<string>

using namespace std;

class A
{
    private:
        int weight;

    public:
        A(int x = 0)        //Parameterized Constructor
        {
            weight = x; 
        }

        void PrintValude()
        {
            cout << endl << "Weight is " << weight;
        }

        A operator + (A w)          // This is needed while operating class-object with operators(+, -, *, /)
        {
            A temp;
            temp.weight = weight + w.weight;
            return temp;
        }
};


int main()
{
    // Normal
    int a = 34, b = 45, c = 0;
    c = a + b;

    cout << endl <<  "Total " << c;

    // Operator Overloading
    A person1(89);
    A person2(99);
    A total;

    total = person1 + person2;
    total.PrintValude();

    return 0;

}

