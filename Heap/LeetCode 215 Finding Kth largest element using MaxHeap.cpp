#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr, int i, int sz){

    int left = 2*i+1, right = 2*i+2;
    int large = i;

    if( arr[large]<arr[left] && left<sz ) large=left;

    if( arr[large]<arr[right] && right<sz ) large=right;

    if(large!=i){
        swap(arr[i],arr[large]);
        heapify(arr,large,sz);
    }
}

int main(){

  vector<int> arr={3, 2, 1, 5, 6, 4};
  int sz = arr.size();

  for(int i=sz/2 -1; i>=0; i--){
    heapify(arr,i,sz);
  }

  for(int i=0; i<sz; i++)cout<<arr[i]<<" ";

    return 0;
}
