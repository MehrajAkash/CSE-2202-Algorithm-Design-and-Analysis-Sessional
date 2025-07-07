#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2){
    int countr=1;
    int n=s1.size(), m=s2.size();
    vector<vector<int>> dp( n, vector<int>(m,0) );

    for(int i=1;i<n; i++){
        for(int j=1;j<m; j++){

            if(s1[i]==s2[j]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }

    }

   return dp[n-1][m-1];
}


int main(){

 string s1="0", s2="0";

  s1+="PRESIDENT", s2+="PROVIDENCE";

 int result = lcs(s1,s2);

 cout<<result<<endl; /// 6

return 0;
}

/// LCS = 'PRIDEN'     length: 6
