#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int vis[100];

void bfs(int s, int n){

    queue<int>Q;
    Q.push(s);
    vis[s]=1;

    while( !Q.empty() ){
        int u = Q.front();
        Q.pop();

        for(int i=0; i<adj[u].size(); i++){

            if( vis[ adj[u][i] ] == 0 ){
                int v = adj[u][i];
                vis[v] = 1;
                Q.push(v);

                cout<<v<<" "; //visted vertices
            }
        }
    }
}

int main(){

    int e=7;//number of edges
    int n=7; // n=node number, starts from 1 to n

    for(int i=0; i<e; i++){

        int u,v;cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int components = 0;
    for(int i=1; i<=n; i++){

        if(vis[i]==0){
             bfs(1, n);// bfs starts from node 1
             components++;
        }
    }

    cout<<endl<<"Number of components "<<components<<endl;


}
/**
input:
6 4
4 3
4 5
3 2
2 5
2 1
5 1

**/
