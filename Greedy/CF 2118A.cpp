#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string result(n, '0');
        int ones = 0;

        // Fill alternating 1s first: 010101...
        for (int i = 0; i < n && ones < k; i += 2) {
            result[i] = '1';
            ones++;
        }

        // If more 1s needed, continue filling in the remaining positions
        for (int i = 1; i < n && ones < k; ++i) {
            if (result[i] == '0') {
                result[i] = '1';
                ones++;
            }
        }

        cout << result << '\n';
    }

    return 0;
}

