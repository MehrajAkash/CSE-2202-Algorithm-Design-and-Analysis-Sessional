
#include<bits/stdc++.h>
using namespace std;

const int mx = 112;
bool vis[mx];
vector<int>adj[mx];

void dfs(int u){
    vis[u] = 1;

    for(auto v : adj[u]){
        if(vis[v]==0){
            dfs(v);
        }
    }

    cout<<u<<endl;

    return;

}

int main(){


    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[1].push_back(5);
    adj[5].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[5].push_back(6);
    adj[6].push_back(5);

    adj[6].push_back(7);
    adj[7].push_back(6);

    dfs(1);


 return 0;
}
