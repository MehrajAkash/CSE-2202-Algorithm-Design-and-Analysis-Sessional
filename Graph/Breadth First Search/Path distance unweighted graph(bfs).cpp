#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int src, vector<int>&parent, vector<int>&dist){

    queue<int>q;
    dist[src]=0;
    q.push(src);

    while( !q.empty()){

        int node = q.front();
        q.pop();

        for(int neighbour : adj[node]){

            if(dist[neighbour]==INT_MAX){
                parent[neighbour] = node;
                dist[neighbour] = dist[node] + 1;
                q.push(neighbour);
            }
        }
    }

}

 void printShortestDistance(vector<int>adj[], int src, int desti, int v){
    vector<int>parent(v, -1);
    vector<int>dist(v, INT_MAX);

    bfs(adj, src, parent, dist);

    if(dist[desti]==INT_MAX){
        cout<<"Source and Destination are not connected"<<endl;
        return;
    }

    vector<int>path;
    int currentNode = desti;
    path.push_back(desti);

    while(parent[currentNode]!= -1){
        path.push_back(parent[currentNode]);
        currentNode = parent[currentNode];
    }

    //Printing path from source to destination
    for(int i=path.size()-1; i>=0; i--){
        cout<<path[i]<<" ";
    }
    cout<<endl;

 }

int main(){

    int v=8, e=10; // Number of vertices and edges
    int src=0, desti = 7; // Source & Destination vertices

    vector<vector<int>> edges={
         { 0, 1 }, { 1, 2 }, { 0, 3 }, { 3, 4 },
            { 4, 7 }, { 3, 7 }, { 6, 7 },
            { 4, 5 }, { 4, 6 }, { 5, 6 }
    };

    vector<int> adj[v];
    for(auto edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    printShortestDistance(adj, src, desti, v);


return  0;
}
