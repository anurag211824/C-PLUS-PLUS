#include<iostream>

using namespace std;

int main(){
    
    int m, n;
    cout << "enter the number of row:";
    cin >> m;
    cout << "enter the number of coulmn:";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    // trnspose matrix code
    int brr[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           brr[i][j]=arr[j][i];
        }
        
    }
 for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< brr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}