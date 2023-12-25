#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    // for loop
    cout << "give the vector:";
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
        // cin>>v[i] can be done but for that we have to specify the size of vector as------->>vector<int>v(size)
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "inserted 6 at i=2" << endl;
    v.insert(v.begin() + 2, 6);
    // for each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "deleted 4" << endl;
    v.erase(v.end() - 2);
    // while loop
    int indx = 0;
    while (indx < v.size())
    {
        cout << v[indx] << " ";
        indx++;
    }
    cout << endl;
    cout << "deleted last element" << endl;
    v.pop_back();
    for (int elem : v)
    {
        cout << elem << " ";
    }
    return 0;
}