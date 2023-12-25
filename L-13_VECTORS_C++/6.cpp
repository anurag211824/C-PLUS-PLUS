#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    vector<int> v(n);
    cout << "enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag=true;
    for (int i = 0; i < v.size()-1; i++)
    {
       if(v[i]>v[i+1]){
        cout<<"array is unsorted";
        break;
       }
       else{
        flag=false;
       }
      
    }
    if(flag=false)
    cout<<"array is sorted";
   
    return 0;
}