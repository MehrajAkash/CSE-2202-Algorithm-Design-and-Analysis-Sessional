#include <bits/stdc++.h>
using namespace std;

bool isSubset( vector<int>& a,  vector<int>& b) {

    // Create a hash set and insert all elements of a
    unordered_set<int> hashSet(a.begin(), a.end());

    // Check each element of b in the hash set
    for (int num : b) {
        if (hashSet.find(num) == hashSet.end()) {
            return false;
        }
    }

    // If all elements of b are found in the hash set
    return true;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 1};

    if (isSubset(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

/**
Time Complexity: O(m + n), where m and n are the size of a and b respectively.
Auxiliary Space: O(m)
**/
