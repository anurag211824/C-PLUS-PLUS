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
    int a;
    cout << "enter a:";
    cin >> a;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            cout << "return index:" << i;
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "return :" << -1;
    }

    return 0;
}