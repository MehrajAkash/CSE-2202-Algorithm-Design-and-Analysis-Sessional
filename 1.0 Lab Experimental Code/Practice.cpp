
/*
#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2){

   int row = s1.size();
    int col = s2.size();
    vector<vector<int>> dp(row, vector<int>(col, 0));

    for(int i=1; i<row; i++){
        for(int j=1; j<col; j++){
            if(s1[i]==s2[j]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    return dp[row-1][col-1];

}

int main(){

 string s1="0", s2="0";

 s1 += "PRESIDENT";
 s2 += "PROVIDENCE";

   cout<< LCS(s1,s2);

return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m=8; int p[] = {0, 1, 3, 5, 6};
    int n=4; int wt[] = {0, 2, 3, 4, 5};
    int dp[n+1][m+1];

    for(int i=0; i<=n; i++){
        for(int w = 0; w<=m; w++){

            if(i==0 || w==0)dp[i][w]=0;

            else if( w>= wt[i]){
                dp[i][w]  = max( dp[i-1][w], dp[i-1][w-wt[i]] + p[i] );
            }
            else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout<<dp[4][8];



return 0;
}

/*
//Minimum way to make a sum using coins
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e3;
int vis[mx], dp[mx];
vector<int> coins = {1, 2, 3};

int minWay(int sum){

    if(sum==0)return 0;
    if(vis[sum])return dp[sum];

     int result = INT_MAX;

    for(auto x : coins){
        if(sum-x >= 0){
          result = min( result, 1+minWay(sum-x) );
        }
    }

    vis[sum]=1;
    dp[sum]=result;

    return result;

}

int main(){

  int sum = 5;
    sort(coins.begin(), coins.end(), greater<>());

    cout<<minWay(sum)<<endl;

return 0;
}




/*
// total way to make a sum using coins
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e3;
int vis[mx], dp[mx];
vector<int> coins = {1, 2, 3};

int totalWay(int sum){
    if(sum==0)return 1;
    if(vis[sum])return dp[sum];

  int result = 0;

    for(auto x : coins){
        if(sum-x >= 0){
           result += totalWay(sum-x);
        }
    }

    vis[sum]=1;
    dp[sum]=result;

    return result;
}

int main(){

    int sum = 5;
    sort(coins.begin(), coins.end(), greater<>());

    cout<<totalWay(sum)<<endl;

  return 0;
}


/*
// Robot Coin Collecting problem
#include<bits/stdc++.h>
using namespace std;

int robotCoin(vector<vector<int>> &grid){

    int row = grid.size();
    int col = grid[0].size();

    vector<vector<int>>dp(row, vector<int>(col,0));
    dp[0][0] = grid[0][0];
    // 1st row filling
    for(int j=1; j<col; j++){
        dp[0][j] = dp[0][j-1]+grid[0][j];
        cout<<dp[0][j]<<" ";
    }
    cout<<endl;
   // 1st column filling
   for(int i=1; i<row; i++){
      dp[i][0] = dp[i-1][0] + grid[i][0];
      cout<<dp[i][0]<<" ";
   }
   cout<<endl;

   for(int i=1; i<row; i++){
     for(int j=1; j<col; j++){
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + grid[i][j];
     }
   }

   for(auto x : dp){
     for(auto u : x){
        cout<<u<<" ";
     }
     cout<<endl;
   }

   return dp[row-1][col-1];
}

int main(){

  vector<vector<int>> grid={
    {1, 0, 1},
    {0, 1, 0},
    {1, 1, 1},
    {0, 0, 1}
  };

  int ans = robotCoin(grid);
  cout<<ans<<endl;

return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int coinRow(vector<int>&coins){

    int n = coins.size();
    if(n==0)return 0;
    if(n==1)return coins[0];

    vector<int>dp(n);
    dp[0]=coins[0];
    dp[1]=max(coins[0],coins[1]);

    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-1], dp[i-2]+coins[i]);
    }

   return dp[n-1];
}


int main(){

    vector<int>coins={5,1,2,10,6,2};
    int maxValue = coinRow(coins);
    cout<<maxValue<<endl;

return 0;
}

/*
//knapSack(greedy)
#include<bits/stdc++.h>
using namespace std;
double result;

bool compare(pair<int,int>a, pair<int,int>b){
    double a1 = 1.0*a.first/a.second;
    double b1 = 1.0*b.first/b.second;

    return a1>b1;
}

void knapSack(vector<int>&pr, vector<int>&wt, int m){

    vector<pair<int,int>> valpr;
    int sz = wt.size();

    for(int i=0; i<sz; i++){
        valpr.push_back({pr[i],wt[i]});
    }

    sort( valpr.begin(), valpr.end(), compare );

    for(auto x : valpr){
        cout<<x.first<<" "<<x.second<<endl;
    }

    int capacity = m, i=0;

        while(valpr[i].second<=capacity){
            result += valpr[i].first;
            capacity -= valpr[i].second;
            i++;
        }

        if(valpr[i].second > capacity ){
            result += capacity*(1.0*valpr[i].first/valpr[i].second);
        }

}

int main(){

    vector<int> pr = {0, 1, 2, 5, 6};
    vector<int> wt = {0, 2, 3, 4, 5};
    int capacity = 8;
    knapSack(pr,wt,capacity);

    cout<<result<<endl;


return 0;
}





// Quick Sort
/*
#include<bits/stdc++.h>
using namespace std;
 vector<int>arr={7,6,10,5,9,2,1,15,7};

int partition(vector<int>&arr,int l, int r){
    int pivot = arr[l];
    int start = l;
    int endd = r;

    while(start<endd){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[endd]>pivot){
            endd--;
        }
        if(start < endd){
            swap(arr[start],arr[endd]);
        }
    }
    swap(arr[l],arr[endd]);

     return endd;

}

void quickSort(vector<int>&arr,int l,int r){
    if(l<r){
        int loc;
        loc = partition(arr,l,r);
        quickSort(arr,l,loc-1);
        quickSort(arr,loc+1,r);
    }
}

int main(){

  int sz = arr.size();

  quickSort(arr,0,sz-1);

  for(auto x : arr){
    cout<<x<<" ";
  }
  cout<<endl;
}



/* 0/1 KnapSack
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m=8; int p[] = {0, 1, 2, 5, 6};
    int n=4; int wt[] = {0, 2, 3, 4, 5};
    int dp[5][5];

    for(int i=0; i<=4; i++){
        for(int w=0; w<=m; w++){

            if(i==0||w==0)dp[i][w]=0;

            else if(wt[i]<=w){
                dp[i][w] = max( dp[i-1][w], dp[i-1][w-wt[i]] + p[i] );
            }
            else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout<<dp[4][8];


return 0;
}



/*
/// MergeSort
#include<bits/stdc++.h>
using namespace std;
vector<int>arr={0,8,1,6,2,9,5};
int sz = arr.size();

void merge(int l,int mid,int r){
    int len = r-l+1;
    int p=l, q=mid+1;

    vector<int>v(len);
    int k=0;

    for(int i=l; i<=r; i++){
        if(p>mid){
            v[k]=arr[q];
            k++,q++;
        }
        else if(q>r){
            v[k]=arr[p];
            k++,p++;
        }
        else if( arr[p] < arr[q] ){
            v[k]=arr[p];
            k++,p++;
        }
        else{
            v[k]=arr[q];
            k++, q++;
        }
    }

    for(int i=l,k=0; i<=r; i++,k++ ){
        arr[i] = v[k];
    }

}

void mergeSort(int low, int high){

    if(low==high)return;

    int mid = (low+high)/2;

    mergeSort(low,mid);
    mergeSort(mid+1,high);
    merge(low,mid,high);
}

int main(){

    mergeSort(1,sz-1);

    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;

  return 0;
}
*/
