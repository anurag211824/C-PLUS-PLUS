#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enetr the size of array:";
    cin >> n;
    int arr[n];

    cout << "enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum all the element of array is:" << sum;
    return 0;
}