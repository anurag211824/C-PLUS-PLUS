#include <iostream>

using namespace std;
int path(int i, int j, int m, int n)
{
    if (i == m - 1)
        return 1;
    if (j == n - 1)
        return 1;

    return path(i + 1, j, m, n) + path(i, j + 1, m, n);
}

int main()
{

    int res = path(0, 0, 3, 3);
    cout << res;
    return 0;
}
