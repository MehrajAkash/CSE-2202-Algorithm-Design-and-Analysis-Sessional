/// total ways to make a sum using coins
#include<bits/stdc++.h>
using namespace std;

vector<int>coins={1,3,4};
const int mx = 1e5;
int dp[mx]; int vis[mx];

int sum(int n){

    if(n==0)return 1;

    if(vis[n])return dp[n];

    int result=0;

    for(int i=0;i<coins.size();i++){

        if( n-coins[i] >= 0 ){
           result += sum(n-coins[i]);
        }
    }

    cout<<"n= "<<n<<"  result: "<<result<<endl;

    dp[n]=result;
    vis[n]=1;

    return result;


}


int main(){

    int n; cin>>n;

    int ans = sum(n);

    cout<<"\nTotal ways: "<<ans<<endl;

    return 0;
}
