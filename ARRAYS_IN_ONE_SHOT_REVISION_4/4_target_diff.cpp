#include <iostream>

using namespace std;
void target_diff(int arr[], int size, int target)
{
    int i = 0;
    int j = 1;
    bool found = false;
    while (i < size && j < size)
    {
        if (abs(arr[i] - arr[j]) == target)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] - arr[j]) < target){
            j++;
        }
        else{
            i++;
        }
    }if(found==true)cout<<"yes";
    else cout<<"no";
}

int main()
{
    int m;
    cout << "enter the size of array:";
    cin >> m;
    cout << "enter array:";
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "enter the target sum:";
    cin >> target;
    target_diff(arr, m, target);
    return 0;
}