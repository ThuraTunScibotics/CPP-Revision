#include<iostream>

using namespace std;

int main()
{
    int nat_num = 1;
    int sum_num = 0;

    while(nat_num <= 10)
    {
        sum_num += nat_num;

        nat_num++;
    }

    cout << "The sum of the first 10 natural numbers is " << sum_num;

    return 0;

}