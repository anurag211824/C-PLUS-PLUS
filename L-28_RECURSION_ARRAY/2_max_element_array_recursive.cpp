#include <iostream>
#include <climits>
#include<bits/stdc++.h>

using namespace std;
int max_element_array(int *arr, int index, int length, int Max)
{

    // base case
    if (index == length-1)
        return Max;

    if (arr[index] > Max)
        Max = arr[index];

    max_element_array(arr, index + 1, length, Max);
}

int max_element(int *arr,int index,int length){
    //base case
    if(index==length-1)
    return arr[index];

    return max(arr[index],max_element(arr,index+1,length));
}

int main()
{
    int Max = INT_MIN;
    int n = 6;
    int arr[n] = {6, 5, 4, 13, 2, 1};
    int ans = max_element(arr, 0, n);
    cout << ans;
    return 0;
}