#include<iostream>
using namespace std;

class Car
{
    private:
        int weight;

    public:
        void SetWeight(int w)
        {
            weight = w;
        }

        int GetWeight()
        {
            return weight;
        }
};

class BMW
{
    private:
        int topSpeed;
        Car *ptr;       // create object in the address of Car class, bcuz of this, we can use the function in Car class
                        // use the ptr pointing to the address of car object
    
    public:
        BMW(int wght = 0, int tSpeed = 0)
        {
            ptr = new Car;      // allocate memory the address for the created Car object

            ptr->SetWeight(wght);        // use the allocated ptr-address and access SetWeight func of car class

            topSpeed = tSpeed;
        }

        int getWeight()
        {
            return ptr->GetWeight();        // also access getWeight function of car class using allocated ptr
        }

        int getSpeed()
        {
            return topSpeed;
        }

        ~BMW()                  // After the task is complete, delete memory
        {
            delete ptr;         
        }

};


int main()
{
    BMW b(3000, 350);

    cout << "Weight of car is " << b.getWeight() << endl;
    cout << "TopSpeed of car is " << b.getSpeed() << endl;

    return 0;
}