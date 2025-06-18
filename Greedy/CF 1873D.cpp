#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){
      int n,k,sol=0;
      cin>>n>>k;

      vector<char>sr(n);
      for(int i=0; i<n; i++){
        cin>>sr[i];
      }

      for(int i=0; i<n; i++){
          //  cout<<i<<endl;
         if(sr[i]=='B'){
            i=i+k-1;
            sol++;
         }

      }

      cout<<sol<<endl;

    }

return 0;
}

/**
Problem_link: https://codeforces.com/problemset/problem/1873/D
**/
