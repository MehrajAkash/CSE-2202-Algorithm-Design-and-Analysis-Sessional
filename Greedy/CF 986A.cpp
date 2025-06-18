#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int pos=0,neg=0;
    int val;
    for(int i=0; i<n; i++){

        cin>>val;

        if(val >=0)pos+=val;

        else{
            neg-=val;
        }

    }
    neg = abs(neg);
    int ans = pos+neg;
    cout<<ans<<endl;

}
