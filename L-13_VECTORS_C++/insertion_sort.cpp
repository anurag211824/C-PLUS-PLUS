#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 9, 0, 5, 3};
    for (int i = 1; i < 7; i++)
    {
        int j = i;
        while (j >= 1 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}