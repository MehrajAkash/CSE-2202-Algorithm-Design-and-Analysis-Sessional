#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){
        int a,x,y;cin>>a>>x>>y;

        int aliceds = min(abs(a-x), abs(a-y));
        int bobds = abs(x-y);

        if(bobds<aliceds){
            cout<<"YES"<<endl;
        }
        else if(bobds==aliceds && bobds>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


return 0;
}
