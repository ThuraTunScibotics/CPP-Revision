/* 
Write a program, take Phone details as input and store them in object & use constructors.
Phone details > 1.Name, 2.RAM, 3.Processor, 4. Battery
*/

#include<iostream>
#include<string>
using namespace std;

class Phone
{
    private:
        string brand;
        int RAM;
        string processor;
        double battery;

    public:
        Phone(string brand_c = "Null", int RAM_c = 0, string processor_c = "Null", double battery_c = 0)
        {
            brand = brand_c;
            RAM = RAM_c;
            processor = processor_c;
            battery = battery_c;
        }

        Phone(Phone &mob)   // Copy constructor
        {
            brand = mob.brand;
            RAM = mob.RAM;
            processor = mob.processor;
            battery = mob.battery;
        }

        void getSpec();
        
};

void Phone::getSpec()
{
    cout << endl << "Phone brand: " << brand;
    cout << endl << "RAM: " << RAM;
    cout << endl << "processor: " << processor;
    cout << endl << "battery: " << battery;
}

int main()
{
    Phone ph1;
    Phone ph2("Apple : i-phone 13", 8, "A1 chip", 3100);
    Phone ph3(ph2);
    
    ph1.getSpec();
    ph2.getSpec();
    ph3.getSpec();

    return 0;
}