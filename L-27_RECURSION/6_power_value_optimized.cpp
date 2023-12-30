#include <iostream>

using namespace std;
int power_vlaue(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // if q is even
        int result = power_vlaue(p, q / 2);
        return result * result;
    }
    else
    {
        // if q is odd
        int result = power_vlaue(p, (q - 1) / 2);
        return p * result * result;
    }
}

int main()
{
    int ans = power_vlaue(2, 7);
    cout << ans;
    return 0;
}