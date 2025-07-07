
#include <bits/stdc++.h>
using namespace std;

// Returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int m, vector<int> &p, vector<int> &wt, int n) {

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= m; w++) {

            // If there is no item or the knapsack's capacity is 0
            if (i == 0 || w == 0)
                dp[i][w] = 0;

                // Pick ith item if it does not exceed the capacity of knapsack
            else if(wt[i] <= w)
                    dp[i][w] = max( p[i]+dp[i-1][w-wt[i]], dp[i-1][w] );

            else
                dp[i][w] = dp[i-1][w];

            }
        }

    return dp[n][m];
}

int main() {
    vector<int> p = {0, 1, 2, 5, 6};/// p = profits
    vector<int> wt ={0, 2, 3, 4, 5};/// wt = weights
    int m=8, n=4;

    cout << knapsack(m, p, wt, n) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int m, vector<int> &p, vector<int> &wt, int n) {

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= m; w++) {

            // If there is no item or the knapsack's capacity is 0
            if (i == 0 || w == 0)
                dp[i][w] = 0;

                // Pick ith item if it does not exceed the capacity of knapsack
            else if(wt[i] <= w)
                    dp[i][w] = max( p[i]+dp[i-1][w-wt[i]], dp[i-1][w] );

            else
                dp[i][w] = dp[i-1][w];

            }
        }

    return dp[n][m];
}

int main() {
    vector<int> p = {0, 1, 2, 5, 6};/// p = profits
    vector<int> wt ={0, 2, 3, 4, 5};/// wt = weights
    int m=8, n=4;

    cout << knapsack(m, p, wt, n) << endl;
    return 0;
}

