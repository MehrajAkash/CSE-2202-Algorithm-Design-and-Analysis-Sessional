
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n+5);
        long long s1=0,s2=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int counta = 1;
        for(int k=0; k<n; k++){
            for(int i=k,j=k+1; i< n; i=i+2,j=j+2){
                s1 += arr[i];
                s2 += arr[j];

                if(s1==s2){
                    cout<<"yes"<<endl;
                    counta = 0;
                    break;
                }
            }

            if(!counta)break;

            s1=0,s2=0;
        }

        if(counta){cout<<"NO"<<endl;}


    }

return 0;
}
