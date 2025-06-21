#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){

        int n,s; cin>>n>>s;
        vector<int>arr(n+1);

        for(int i=1;i<=n;i++)cin>>arr[i];

        if(s==arr[n] && n==1)cout<<0<<endl;

        else if(n==1 && arr[n]==1 && s==1 )cout<<0<<endl;

        else if(s==1)cout<<arr[n]-1<<endl;

        else if(s==arr[n])cout<< arr[n]-1 <<endl;

       else if(s>arr[n])cout<<s-arr[1]<<endl;

        else if( s-arr[1] < arr[n]-s ){
            cout<< (s-arr[1])*2 + arr[n]-s <<endl;
        }
        else{
            cout<< (arr[n]-s)*2 + (s-arr[1]) <<endl;
        }

    }


    return 0;
}
