// find the total number of trilets in the array whoose sum is equal to the given value x
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
    int num_triplets = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x){
                    num_triplets++;
                }
            }
        }
    }
    cout << endl;
    cout << "the total numbers of pairs:" << num_triplets;
    return 0;
}