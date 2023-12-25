// count the number of occurance of a particular element x
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
    int x;
    cout << "enter x:";
    cin >> x;
    int occurance = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurance++;
        }
    }
    cout << "number of occurance is:" << occurance;
    return 0;
}