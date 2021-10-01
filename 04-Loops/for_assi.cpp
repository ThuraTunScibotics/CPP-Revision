#include <iostream>

using namespace std;

int main()
{
    int nat_sum = 0;
   
    for (int nat_num = 1; nat_num <=10; nat_num++)
    {
        nat_sum += nat_num; 
    }
   
   cout << "The sum of the first ten natural number: " << nat_sum;

   return 0;
}
