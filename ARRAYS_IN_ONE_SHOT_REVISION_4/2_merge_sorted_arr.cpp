
#include<iostream>

using namespace std;
void merge_sorted_array(int arr1[],int arr2[],int size1,int size2){
    int arr3[size1+size2];
    int i=0;
    int j=0;
    int k=0;
    while(i<size1&&j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<size1){
        // arr2 got exhausted and we still got elements left in arr1
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        // arr1 got exhausted and we still got elements left in arr2
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    // display arr3[]
    for(int i=0;i<size1+size2;i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
     int m;
    cout << "enter the size of first array:";
    cin >> m;
    cout << "enter first array:";
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    int n;
    cout << "enter the size of second array:";
    cin >> n;
    cout << "enter second array:";
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    merge_sorted_array(arr1, arr2, m, n);
return 0;
}