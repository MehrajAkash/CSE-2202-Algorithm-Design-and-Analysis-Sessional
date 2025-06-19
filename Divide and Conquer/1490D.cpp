
#include<bits/stdc++.h>
using namespace std;

void assignDepth(vector<int>&arr,vector<int>&depth,int left, int right, int depthValue){

    if(left>right)return;

    int maxIndex = left;
    for(int i=left; i<=right; i++){
        if(arr[maxIndex]< arr[i]){
            maxIndex=i;
        }
    }

    depth[maxIndex]=depthValue;

    assignDepth(arr, depth, left, maxIndex-1, depthValue+1);
    assignDepth(arr, depth, maxIndex+1, right, depthValue+1);


}


int main(){

 int t;cin>>t;

 while(t--){

    int n;cin>>n;
     vector<int>arr(n+1); // starting index 1
     vector<int>depth(n+1);

     for(int i=1;i<=n;i++)cin>>arr[i];

     assignDepth(arr,depth,0,n,0);

     for(int i=1; i<=n; i++)cout<<depth[i]<<" ";

    cout<<endl;
 }


return 0;
}
/**
problemLink: https://codeforces.com/problemset/problem/1490/D
**/
