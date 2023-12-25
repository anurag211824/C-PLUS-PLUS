#include<iostream>

using namespace std;

int main(){
      int n;
    cout << "enetr the size of array:";
    cin >> n;
    int arr[n];

    cout << "enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max=arr[0];
     for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"the max element is:"<<max;

return 0;
}