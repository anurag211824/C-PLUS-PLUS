#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "the size of array:" << sizeof(arr) << endl;
    cout << "the length of array:" << sizeof(arr) / sizeof(arr[0]) << endl;
    return 0;
}