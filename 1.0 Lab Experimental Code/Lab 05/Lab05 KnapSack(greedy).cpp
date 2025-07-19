#include<bits/stdc++.h>
using namespace std;

bool cmp( pair<int,int>a, pair<int,int>b ){

    double a1 = 1.0 * a.first/a.second;
    double b1 = 1.0 * b.first/b.second;

    return a1>b1;

}

double fractionalKnapsack(vector<int>&val, vector<int>&wt, int capacity){

    int n = val.size();
    vector< pair<int,int> >items;

    for(int i=0; i<n; i++){
        items.push_back( {val[i], wt[i]} );

    }

    sort(items.begin(), items.end(), cmp);

    // Maximum profit can be earned by these sorting sequence
    for(auto x : items)cout<<x.first<<" "<<x.second<<endl;

    double result=0, currentCapacity = capacity;

    for(int i=0; i<n; i++){

        if( items[i].second <= currentCapacity ){
            result += items[i].first;
            currentCapacity -= items[i].second;
        }
        else{
            result += 1.0 * ( (items[i].first/items[i].second) * currentCapacity );
        }

    }

    return result;

}


int main(){

    vector<int> val = { 100, 120, 60 };
    vector<int> wt = { 20, 30, 10 };


    auto result = fractionalKnapsack(val, wt, 50);

    cout<<"\nMax profit: "<<result<<endl;



 return 0;
}
