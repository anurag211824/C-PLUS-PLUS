#include <bits/stdc++.h>
using namespace std;
string Sortstring(string s)
{
    string res = "";
    vector<int> store(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        store[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (store[i])
        {
            res += i + 'a';
            store[i]--;
        }
    }
    return res;
}

int main()
{
    string s;
    cout << "enter a string to be sorted:";
    getline(cin, s);
    string res = Sortstring(s);
    cout << res << endl;

    return 0;
}
/*
This C++ program is designed to sort a given string alphabetically.
It utilizes a counting sort algorithm to achieve this.
*/