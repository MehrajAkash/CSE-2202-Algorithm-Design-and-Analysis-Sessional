#include<bits/stdc++.h>
using namespace std;
int main(){

   vector<int>nums= {-2,1,-3,4,-1,2,1,-5,4};

   int mxending=nums[0];
   int res = nums[0];
   for(int i=1; i<nums.size(); i++){

        mxending=max(mxending+nums[i],nums[i]);
        res = max(res,mxending);

   }
  cout<<res<<endl;





return 0;
}
