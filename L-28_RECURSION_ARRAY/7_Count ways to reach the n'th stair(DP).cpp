#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int mod = 1e9 + 7;

    int counter(int n, int s, vector<int> &dp)
    {
        // Base cases
        if (s == n)
        {
            return 1;
        }
        if (s > n)
        {
            return 0;
        }

        // Check memoized result
        if (dp[s] != -1)
        {
            return dp[s];
        }

        // Calculate number of ways recursively
        int ways = (counter(n, s + 1, dp) % mod + counter(n, s + 2, dp) % mod) % mod;

        // Memoize the result
        dp[s] = ways;

        // Return the computed ways
        return ways;
    }

    int countWays(int n)
    {
        vector<int> dp(n + 1, -1); // Initialize memoization vector
        return counter(n, 0, dp);
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = sol.countWays(n);
    cout << "Number of ways to reach " << n << " stairs: " << ways << endl;

    return 0;
}
