
#include<bits/stdc++.h>
using namespace std;

const int mx=1e3;
int vis[mx];
int res[mx];

int fibo(int n){

    if(n<=1)return n;

    if(vis[n])return res[n];

    int result = fibo(n-1) + fibo(n-2);

    vis[n]=1;
    res[n]=result;

  return result;
}


int main(){

    int n=6;
    cout<<fibo(n)<<endl;

return 0;
}
