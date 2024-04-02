#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    vector<int> store(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        store[s1[i] - 'a']++;
        store[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (store[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    if (checkAnagram(s1, s2))
    {
        cout << "the given strings are anagarm";
    }
    else
    {
        cout << "the given strings are not anagram";
    }
    return 0;
}
/*
Your program appears to be checking whether two strings are anagrams of each other.
An anagram is a word or phrase formed by rearranging the letters of another word or phrase,
using all the original letters exactly once.
*/