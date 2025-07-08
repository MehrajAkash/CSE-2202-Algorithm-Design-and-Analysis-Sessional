
/// Finding all pair shortest path for a directed graph
#include<bits/stdc++.h>
using namespace std;

void floydWarshall(vector<vector<int>> &dist){
    int v = dist.size();

    for(int k=0;k<v;k++){
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){

                if( dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX ){

                    dist[i][j] = min( dist[i][j], dist[i][k]+dist[k][j] );
                }

            }
        }
    }
}

int main(){

    int INF = INT_MAX;
    vector<vector<int>> dist = {
        {0, 4, INF, 5, INF},
        {INF, 0, 1, INF, 6},
        {2, INF, 0, 3, INF},
        {INF, INF, 1, 0, 2},
        {1, INF, INF, 4, 0}
    };

    floydWarshall(dist);
    for(int i=0; i<dist.size(); i++){
        for(int j=0; j<dist.size(); j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

  return 0;
}

