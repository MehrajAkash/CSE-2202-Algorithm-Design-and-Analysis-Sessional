
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> m;

    int t;cin>>t;
    int val;

   int maxi = INT_MIN;

    while(t--){
        cin>>val;
        m[val]++;
    }

    for(auto i : m){

        maxi = max(maxi, i.second );

    }
    cout<<maxi<<endl;


return 0;

}
/**
problemLink: https://codeforces.com/contest/903/problem/C
**/
