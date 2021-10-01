#include <iostream>
using namespace std;

int main()
{
    int num_arr;
    cout << "How many array do you want to enter: " ;
    cin >> num_arr;

    int arr[num_arr] = {0};
    int sum_arr = 0;

    for (int i = 0; i < num_arr; i++)
    {
        cout << endl << "arr[ " << i << " ] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < num_arr; i++)
    {
        sum_arr += arr[i];
    }

    cout << endl << "The sum of the array is: " << sum_arr;

    return 0;
}