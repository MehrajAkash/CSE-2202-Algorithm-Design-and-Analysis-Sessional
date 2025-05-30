/// evaluate how many connected components in graph
#include<bits/stdc++.h>
using namespace std;

const int mx = 200;
vector<int>adj[mx];
bool vis[mx];
int countNode =0;
int ans=0;

void dfs(int u){

    vis[u]=1;

    countNode++;

    for(auto x : adj[u]){
        if(vis[x]==0){
            dfs(x);
        }
    }
}

int main(){

    int n,e,u,v;
    cin>>n>>e;

    for(int i=1;i<=e;i++){
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int countCCG=0;

    //cout<<" dfs start"<<endl;
    for(int i=1; i<=n; i++){
           // cout<<i<<endl;
        if(vis[i]==0){

            dfs(i);

            ans=max(ans,countNode);

            countNode=0;
        }
    }

    cout<<"Maximum Number of Node in a component: "<< ans <<endl;

  return 0;
}
/**
problem-link:
 https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

input:
8 5
1 2
2 3
2 4
3 5
6 7

output: 3
**/

