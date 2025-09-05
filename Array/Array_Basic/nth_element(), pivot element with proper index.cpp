#include<bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v = { 8, 23, 45, 3, 10 };

    /// element for v.size()/2 position... median
    nth_element(v.begin(), v.begin()+v.size()/2, v.end());

    cout << "The median of the array is: "<< v[v.size()/2] <<endl; /// index 2, v[2] = 10


    int index = v.size()-1;
    nth_element(v.begin(), v.begin()+index, v.end() );

    cout<<"Last index value: "<<v[index]<<endl;


    for(auto x : v){
        cout<<x<<" "; /// 10 3 8 23 45 ->after implement nth_element() 8 & 45 placed their appropriate position if sort the array
    }
}
