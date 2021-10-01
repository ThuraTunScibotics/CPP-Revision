#include<iostream>
using namespace std;

int main()
{
    int nat_num = 1;
    int sum_num = 0;

    do
    {
        sum_num += nat_num;
        
        nat_num++;

    } while (nat_num <= 10);
    

    cout << endl << "The sum of the first ten natural numbers = " << sum_num;

    return 0;
}