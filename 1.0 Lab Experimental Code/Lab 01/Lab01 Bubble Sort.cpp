#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){


    for(int i=0;i<arr.size(); i++){

        int change=1;

        for(int j=0; j<arr.size()-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                change =0;
            }
        }

        if(change)break;

         for(int k=0; k<arr.size(); k++)cout<<arr[k]<<" ";

            cout<<endl;


    }
}

int main(){

    vector<int>arr={ 64, 34, 25, 12, 22, 11};
    bubbleSort(arr);

    for(int i=0; i<arr.size(); i++)cout<<arr[i]<<" ";

    cout<<endl;
}
