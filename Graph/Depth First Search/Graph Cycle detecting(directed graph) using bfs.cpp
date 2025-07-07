#include<bits/stdc++.h>
using namespace std;

const int mx = 10;
vector<int>vis(mx);
vector<int>adj[mx];

bool dfs(int u,int v){

    vis[u]++;
    cout<<"vertex: "<<u <<"  visted time:"<<vis[u]<<endl;

    if(vis[u]>1)return true;

    for(auto x : adj[u]){
        dfs(x,v);
    }
}

bool isCyclic(int v, vector<vector<int>>&edges ){

    for(auto it : edges){
        adj[it[0]].push_back(it[1]);
    }

    bool res = dfs(0,v);

    return res;
}

int main(){

 int vertix=3;

  vector<vector<int>>edges={{0,1},{1,2},{2,0}};

    cout<<( isCyclic(vertix,edges) ? "Cycle deceted":"Cycle not found" )<<endl;


 return 0;
}
