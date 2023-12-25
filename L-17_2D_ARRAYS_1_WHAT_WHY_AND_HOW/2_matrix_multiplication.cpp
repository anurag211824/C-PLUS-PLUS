#include <iostream>

using namespace std;

int main()
{
    int m, n, p, q;
    cout << "enter the number of row in first array:";
    cin >> m;
    cout << "enter the number of coulmn in first array:";
    cin >> n;
    cout << "enter the number of row in second array:";
    cin >> p;
    cout << "enter the number of coulmn in second array:";
    cin >> q;
    cout << "enter first array\n";
    int arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "enter second array\n";
    int arr2[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
    }
if(n!=p){
    cout<<"multipilcation not possible";
}
    else
    {
        cout << "2d arrays after get multiplied\n";
        int arr3[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                arr3[i][j] = 0;
                for (int r = 0; r < n; r++)
                {
                    arr3[i][j] = arr3[i][j] + arr1[i][r] * arr2[r][j];
                }
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
   

    return 0;
}