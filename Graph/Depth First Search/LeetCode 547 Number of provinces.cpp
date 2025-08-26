#include<bits/stdc++.h>
using namespace std;

const int mx=201;
int vis[mx];
vector<int>adj[mx];

class Solution {
public:
    void dfs(int i){

        vis[i]=1;

        for(auto x : adj[i]){

            if(vis[x]==0){
                dfs(x);
            }

        }

    }

    int findCircleNum(vector<vector<int>>& isConnected) {

         for(int i=0; i<isConnected.size(); i++){
            for(int j=0; j<isConnected[0].size(); j++){
                if(isConnected[i][j] ==1){
                    adj[i].push_back(j);
                }
            }
         }

        int cnt=0;
        for(int i=0; i<isConnected.size(); i++)
        {
            if(vis[i]==0){

                dfs(i);
                cnt++;

            }

        }

       return cnt;
    }
};
int main(){

 Solution s;
 vector<vector<int>> grid={
    {1,0,0},
    {0,1,0},
    {0,0,1}
 };

 cout<<s.findCircleNum(grid);

return 0;
}
