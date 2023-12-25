// find the unique number in a given array where all the elements are being repeated twice with one
// one value being unique
#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cout << "enter the size of array:";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int arr[]={2,3,1,3,2,4,1};
    int size=7;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j <6; j++)
        {
            if (arr[i] == arr[j+1])
            {                                      // array malipulation

                arr[i] = arr[j+1] = -1;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << " is unique";
        }
    }

    return 0;
}