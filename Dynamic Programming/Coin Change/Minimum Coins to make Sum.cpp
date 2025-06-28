#include <bits/stdc++.h>
using namespace std;

vector<int>coins = {1,3,4};
int n, vis[10000005], dp[10000005];

int solve(int m){

	if(m==0) return 0;
	if(vis[m]) return dp[m];

	int res=INT_MAX;

	for(int i=0; i<coins.size(); i++){

        if( m-coins[i] >= 0 ){
            res=min( res, 1+solve(m-coins[i]) );
        }

	}
	vis[m]=1;
	dp[m]=res;
	cout<<res<<endl;
	return res;
}

int main(){

	cin>>n;
	int ans=solve(n);
	cout<<endl<<ans<<'\n';
	return 0;
}

/**
input: 8
output: 2

explaination: 5+3 = 8 , here two coins needed making sum 8

**/


