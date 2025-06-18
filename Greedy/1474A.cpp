#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n; cin>>n;
        vector<char> arrb(n+1),arra(n+1);

        for(int i=1; i<=n; i++){
            cin>>arrb[i];
        }

        int sum[n+1];
        sum[0]=0;

        for(int i=1; i<=n; i++){

            sum[i]=int(arrb[i])+1;
            arra[i]='1';

            if(int(arrb[i])+1 == sum[i-1]){
                sum[i]=int(arrb[i])+0;
                arra[i]='0';
            }
        }

       // cout<<" OUtput: ";
        for(int i=1; i<=n; i++){
            cout<<arra[i];
        }

        cout<<endl;

    }


 return 0;
}
/**problem link:
 https://codeforces.com/problemset/problem/1474/A
**/

