#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,ending;
    cin>>n>>ending;

     vector<int>arr(n+1);
     arr[0]=0;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    double ans;




    for(int i=1; i<=n-2; i++){
        if(arr[i+1]-arr[i] > ans){
            ans = arr[i+1]-arr[i];
        }
    }

    if(n<=2){
        ans = max( arr[1]-0, ending-arr[n] );
       // cout<<ans<<endl;

      //  cout<<arr[n]<<" "<<arr[n-1]<<endl;
        ans = max( ans, (arr[n]-arr[n-1])/2.0 );
       // cout<<ans<<endl;

      /*  if(n==2){
            ans=max(ans, (arr[2]-arr[1])/2.0 );
        } */

        cout << fixed << setprecision(10) << ans*1.0<<endl;

        return 0;

    }

 cout << fixed << setprecision(10) << ans/2.0<<endl;


}
