#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int mod = 1e9 + 7;

    //Function to count number of ways to reach the nth stair.
    int counter(int n, int s, vector<int>& dp){
        if (s == n) {
            return 1;
        }
        if (s > n) {
            return 0;
        }
        if (dp[s] != -1) {
            return dp[s] % mod;
        }
        int a = counter(n, s + 1, dp) % mod;
        int b = counter(n, s + 2, dp) % mod;

        dp[s] = (a + b) % mod;

        //return dp[s];
    }
    
    // Function to print the dp vector.
    void printDP(int n) {
        vector<int> dp(n + 1,-1);
        counter(n, 0, dp);
        for (int i = 0; i <= n; ++i) {
            cout << "dp[" << i << "] = " << dp[i] << endl;
        }
    }
};

int main() {
    Solution sol;
    int n = 4; // Change n as needed
    sol.printDP(n);
    return 0;
}