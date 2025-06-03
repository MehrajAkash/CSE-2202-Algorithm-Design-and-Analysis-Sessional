#include <iostream>
using namespace std;

int n;
int dp[1000000+5],vis[1000000+5];

int solve(int sum){

	//cout<<"Sum now "<<sum<<endl;

	if(sum==0) return 1;

	if(vis[sum]==1) return dp[sum];

    int res=0;

	for(int j=1; j<=6; j++){

		if(sum>=j){

			res += solve(sum-j);
		}

	}

	   cout<<"sum: "<<sum<<"  res: "<<res<<endl;

	   vis[sum] = 1;
	   dp[sum] = res;

	return res;
}


int main() {

    int sum; cin>>sum;

	cout<<solve(sum)<<endl; /// time Complexity: 6^sum
}
/// problem link: https://cses.fi/problemset/task/1633

/**
Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
For example, if n=3, there are 4 ways:

1+1+1
1+2
2+1
3

Input
The only input line has an integer n.
Output
Print the number of ways modulo 10^9+7.

Example

Input:
3

Output:
4
**/
