#include<iostream>
#include<string>

using namespace std;

struct camera
{
    int front;
    int rear;
};

struct my_phone
{
    string name;
    string processor;
    int RAM;
    int ROM;
    camera camera;
    double price;
};

int main()
{
    my_phone xiaomi;

    xiaomi.name = "Mi6X";
    xiaomi.processor = "Snapdragon660";
    xiaomi.RAM = 6;
    xiaomi.ROM = 64;
    xiaomi.camera.rear = 24;
    xiaomi.camera.front = 12;
    xiaomi.price = 320000;

    cout << endl << "Phone model is: " << xiaomi.name;
    cout << endl << "Phone Processor is: " << xiaomi.processor;
    cout << endl << "RAM is: " << xiaomi.RAM << "GB";
    cout << endl << "ROM is: " << xiaomi.ROM << "GB";
    cout << endl << "Front camera is: " << xiaomi.camera.front << "MP";
    cout << endl << "Rear camera is: " << xiaomi.camera.rear << "MP";
    cout << endl << "Price is: " << xiaomi.price << "kyats";

    return 0;
}