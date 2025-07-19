#include<bits/stdc++.h>
using namespace std;

vector<int>coins = {1,3,4};
map<int,int>coinWise;

void minCoin(int sum){

    sort(coins.begin(), coins.end(), greater<>() );
    int temp = sum;
    int countCoin =0;
    int i=0;

    while(temp>0){

        while(temp>=coins[i]){
            temp -= coins[i];
            countCoin+=1;

            coinWise[coins[i]]++;
        }
        i++;
    }


    for(auto x : coinWise){
        cout<<x.first<<" used "<<x.second<<" times\n";
    }

    cout<<"total coins needed: "<<countCoin<<endl;

}

int main(){

    int sum = 6;

    minCoin(sum);


 return 0;
}
