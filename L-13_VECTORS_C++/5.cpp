// count the number of elements stictly greater than value x
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    vector<int> v(n);
    cout << "enter vector:";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter x:";
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }
    cout << "count is:" << count;
    return 0;
}