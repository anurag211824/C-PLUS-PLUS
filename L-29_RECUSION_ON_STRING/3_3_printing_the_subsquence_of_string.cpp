/*
input abc
output a,b,c,ab,bc,ac,abc,NUll
*/
#include <iostream>
#include <vector>

using namespace std;
void print_subsquence(string &str, int n, int i, vector<string> &res, string str1)
{
    if (i == n)
    {
        res.push_back(str1);
        return;
    }
    print_subsquence(str, n, i + 1, res, str1 += str[i]);
    str1.pop_back();
      
    print_subsquence(str, n, i + 1, res, str1);
}

int main()
{
    string str = "abc";
    int n = str.size();
    string str1;
    vector<string> res;
    print_subsquence(str,n,0,res,str1);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] <<endl;
    }

    return 0;
}