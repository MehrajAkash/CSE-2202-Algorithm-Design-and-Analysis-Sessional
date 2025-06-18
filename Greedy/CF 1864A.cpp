#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){
         int x,y,n;
        cin>>x>>y>>n;
        int arr[n];

        arr[n-1]=y;
        int b=1;
        for(int i=n-2; i>=0; i--){
            arr[i]=arr[i+1]-b;
            b++;
        }

        if(arr[0]>=x){
                arr[0]=x;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
          cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }


return 0;
}
/**
problem link: https://codeforces.com/problemset/problem/1864/A
**/
