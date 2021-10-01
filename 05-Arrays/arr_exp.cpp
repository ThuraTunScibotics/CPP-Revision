#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        cout << endl << "arr[ " << i << " ] = " ;
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << endl << "The minimum value is : " << max;
}