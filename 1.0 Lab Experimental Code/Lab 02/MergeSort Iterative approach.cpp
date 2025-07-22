#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary vector for left and right subarrays
    vector<int> arr1(n1), arr2(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++)
        arr1[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        arr2[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    // Merge the temp vectors back into arr
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1[] if any
    while (i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2[] if any
    while (j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

// Main sorting function
void mergeSort(vector<int>& arr) {
    int n = arr.size();

    // Iterate through subarrays of increasing size
    for (int currSize = 1; currSize <= n-1; currSize = 2*currSize) {

        // Pick starting points of different
        // subarrays of current size
        for (int leftStart = 0; leftStart < n-1; leftStart += 2*currSize){

            // Find endpoints of the subarrays to be merged
            int mid = min(leftStart + currSize - 1, n-1);
            int rightEnd = min(leftStart + 2*currSize - 1, n-1);

            // Merge the subarrays arr[leftStart...mid]
            // and arr[mid+1...rightEnd]
            merge(arr, leftStart, mid, rightEnd);
        }
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr);
    for (auto val: arr)
        cout << val << " ";

}
