#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "enter the size of first array:";
    cin >> m;
    cout << "enter array:";
    int arr1[m];
    arr1[0] = 0;
    for (int i = 1; i < m + 1; i++)
    {
        cin >> arr1[i];
    }
    int sum = 0;
    int sumarr = 0;
    for (int i = 1; i < m + 1; i++)
    {
        sum = sum + i;
        sumarr = sumarr + arr1[i];
        if (sum != sumarr)
        {
            cout<<"missing number is:"<< i;
            break;
        }
    }

    return 0;
}