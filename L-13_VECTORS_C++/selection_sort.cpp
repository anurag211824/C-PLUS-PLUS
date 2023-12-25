#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 9, 0, 5, 3};
    for (int i = 0; i < 6; i++)
    {
        int min = __INT_MAX__;
        int minidx;
        for (int j = i; j < 7; i++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}