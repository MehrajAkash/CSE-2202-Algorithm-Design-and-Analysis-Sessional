#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
//#define ll long long

const int mx = 1e5+123;
vector<pair<int,int>>adj[mx];
int dist[mx];

void dijkstra(int s, int n){

    for(int i=0; i<=n; i++)dist[i]=INT_MAX;

    dist[s] = 0; /// initializing source distance
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq; /// 'greater' for minimum distance priority first.
    pq.push({ 0, s }); /// pushing source in queue, distance=0, source node = s

    while( !pq.empty()){
        int u = pq.top().second;
        int curDist = pq.top().first;
        pq.pop();

        if( dist[u]<curDist )continue;

        for(auto p : adj[u]){
            int v = p.first;
            int w = p.second;

            if( curDist+w < dist[v] ){
                dist[v] = curDist+w;
                pq.push( { dist[v], v } );
            }
        }
    }
}

int main(){

  int n,e; // n=node numbers  e=edge numbers
  cin>>n>>e;

  for(int i=1; i<=e; i++){
     int u,v,w;   /// u=initial node, v=destination node, w=weight/distance btw two node
     cin>>u>>v>>w;
     adj[u].push_back({v,w});
  }

  dijkstra( 1, n );

  for(int i=1; i<=n; i++){
    cout<<dist[i]<<" ";
  }

    cout<<endl;


 return 0;
}
/**
input:
5 7
1 3 3
1 2 2
1 4 6
2 0 6
2 3 7
0 4 3
3 4 5

output:
0 2 3 6 2147483647
***/

