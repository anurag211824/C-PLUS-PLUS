#include <iostream>
#include <vector>

using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int row;
    cout<<"enter the number of row:";
    cin >> row;
    vector<vector<int>> matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j <i+1; j++)
        {
          
            temp.push_back(factorial(i)/(factorial(j)*factorial(i-j)));
        }
        matrix.push_back(temp);
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}