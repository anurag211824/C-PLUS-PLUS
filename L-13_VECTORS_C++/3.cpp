// find the last occurance of an element x in a given array
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enetr n:";
    cin >> n;
    cout << "enter the array:";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "give x:";
    cin >> x;
    int i;
    int occurance;
    for (i = 0; i < v.size(); i++)
    {
        
        if (v[i] == x)
        {
           occurance=i;
            
        }
    
    }
    cout<<"the last index of a given number x:"<<occurance<<endl;


    return 0;
}