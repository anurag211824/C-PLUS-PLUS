// find the total number of pairs in the array whoose sum is equal to the given value x
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the value of x:";
    cin >> x;
    int num_pairs = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j + 1]== x)
            {
                num_pairs++;
               cout<<"("<<arr[i]<<","<<arr[j+1]<<")"<<" ";
            }
        }
    }
cout<<endl;
    cout << "the total numbers of pairs:" << num_pairs;
    return 0;
}