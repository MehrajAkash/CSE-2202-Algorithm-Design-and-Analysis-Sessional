#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int coinRow(vector<int>& coins) {
    int n = coins.size();
    if (n == 0) return 0;
    if (n == 1) return coins[0];

    vector<int> dp(n);  // dp[i] = max value considering coins[0..i]
    dp[0] = coins[0];
    dp[1] = max(coins[0], coins[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + coins[i]);
    }

    return dp[n - 1];
}

int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};
    cout << "Maximum value: " << coinRow(coins) << endl;
    return 0;
}

