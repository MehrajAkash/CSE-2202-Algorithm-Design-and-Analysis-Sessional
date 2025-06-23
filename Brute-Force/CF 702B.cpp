#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>arr(n+1);
    map<int,int>m;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    long long counta=0;
    for(int i=1;i<=n;i++){

        for(int p=0; p<=30; p++){

            int sum=(1<<p); /// 2^p

            int need = sum-arr[i];
            if( need > 0){
                if(m[need]>=1 ){
                    counta += m[need];
                }
            }
        }
        m[arr[i]]++;
    }
    cout<<counta<<endl;

return 0;
}

/** problemLink:
   https://codeforces.com/problemset/problem/702/B
**/
