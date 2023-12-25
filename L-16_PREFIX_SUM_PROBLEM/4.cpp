#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    arr[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr[i];
    }
    // prefix sum array
    for(int i=1;i<n+1;i++){
        arr[i]=arr[i]+arr[i-1];
    }
int queries;
cout<<"enter number of queries:";
cin>>queries;
while(queries--){
int r,l;
cin>>r;
cin>>l;
int ans;
ans=arr[r]-arr[l-1];
cout<<ans;
}
    return 0;
}