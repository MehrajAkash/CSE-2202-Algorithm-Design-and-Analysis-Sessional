#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;cin>>t;

    while(t--){

        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }

        int x=0;

        for(int i=0; i<n; i++){
            x++;
            if(arr[i]==x)x++;
        }

        cout<<x<<endl;

    }



	return 0;
}
/***
problem link: https://codeforces.com/problemset/problem/1882/A
***/
