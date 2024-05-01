#include <bits/stdc++.h>
using namespace std;
void substring_genertaor(string str, vector<string> &substrings)
{
    int n = str.size();
    int substr_size = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<=n; j++)
        {
            substrings.push_back(str.substr(i,j-i));
        }
    }
}
int main()
{
    string str = "abc";
    vector<string> substrings;
    substring_genertaor(str, substrings);
    for (int i = 0; i < substrings.size(); i++)
    {
        cout << substrings[i] << " ";
    }
}