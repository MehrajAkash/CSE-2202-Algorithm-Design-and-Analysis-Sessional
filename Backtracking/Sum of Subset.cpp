
#include <bits/stdc++.h>
using namespace std;

// Print all subsets if there is atleast one subset of set[]
// with sum equal to given sum
bool flag = 0;
void PrintSubsetSum(int i, int n, vector<int>& set, int targetSum, vector<int>& subset)
{
    // targetSum is zero then there exist a subset. this for including elements
    if (targetSum == 0) {

        // Prints valid subset
        flag = 1;
        cout << "[ ";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << "]";
        return;
    }

    if (i == n) {
        // return if we have reached at the end of the array . this for excluding elements
        return;
    }

    // Not considering current element
    PrintSubsetSum(i + 1, n, set, targetSum, subset);

    // consider current element if it is less than or equal to targetSum
    if (set[i] <= targetSum) {

        subset.push_back(set[i]);

        // Recursive call for consider current element
        PrintSubsetSum(i + 1, n, set, targetSum - set[i], subset);

        // pop-back element after recursive call to restore subsets original configuration
        subset.pop_back();
    }
}

// Driver code
int main()
{
    // Test case 1
    vector<int>set = { 1, 2, 1 };
    int sum = 3;
    int n = set.size();
    vector<int> subset;
    cout << "Output 1:" << endl;
    PrintSubsetSum(0, n, set, sum, subset);
    cout << endl;

    return 0;
}

