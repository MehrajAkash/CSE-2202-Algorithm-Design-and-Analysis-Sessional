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
        memset(vis, 0, sizeof(vis));
        memset(adj, 0, sizeof(adj));

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
