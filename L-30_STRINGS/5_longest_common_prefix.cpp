#include <bits/stdc++.h>
using namespace std;

string Longest_common_prefix(vector<string> &stringArr)
{
    int n = stringArr.size();
    string ans = "";
    sort(stringArr.begin(), stringArr.end());
    string s1 = stringArr[0];
    int i = 0;
    string s2 = stringArr[n - 1];
    int j = 0;
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            ans += s1[i];
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    return ans;
}
string Longest_common_prefix_(vector<string> &stringArr)
{
    int n = stringArr.size();
    if (n == 0)
        return "";

    string ans = stringArr[0]; // Initialize with the first string
    int ansLen = ans.size();   // Initialize the length of the common prefix

    // Loop through the strings from the second string onwards
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        // Compare characters until the end of either the common prefix or the current string
        while (j < ansLen && j < stringArr[i].size() && ans[j] == stringArr[i][j])
            j++;

        // Update the length of the common prefix
        ansLen = min(ansLen, j);
    }

    // Return the common prefix of length ansLen
    return ans.substr(0, ansLen);
}

int main()
{
    int n;
    cout << "enter the size of string array:";
    cin >> n;
    vector<string> stringArr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stringArr[i];
    }
    string lcp = Longest_common_prefix_(stringArr);
    cout << "longest common prefix is: ";
    cout << lcp << endl;
    return 0;
}
