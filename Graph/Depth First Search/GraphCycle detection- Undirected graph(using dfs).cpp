#include<bits/stdc++.h>
using namespace std;

bool detectCycle(vector<vector<int>> &adj, int u, vector<bool>&visited, vector<bool> &record){

    //If the node is already in the recursion stack, a cycle is detected
    if(record[u])
        return true;

    // If the node is already visited and not in recursion stack, no need to check again
    // It means previously backtrack occured from this node, cz it has no adjacency node that create cycle..thus record false but visited true.
    if(visited[u])
        return false;

    visited[u] = true;
    record[u] = true;

    // traverse for all neighbors
    for(int x : adj[u]){

        if(detectCycle(adj, x, visited, record))
            return true;
    }
    // remove the node from the recursion stack
    record[u] = false;
    return false;
}

bool isCyclic(int v, vector<vector<int>> &edges){

    // creating adjacency list
    vector<vector<int>> adj(v);
    for(auto it : edges){
        adj[it[0]].push_back(it[1]);
    }

    vector<bool>visited(v, false);
    vector<bool>record(v, false);

    // Check for cycles starting from every unvisited node
    for(int i=0; i<v; i++){

        if( !visited[i] && detectCycle( adj, i, visited, record ) ) // !visiited[u] -means previously not vistied- !false = true
            return true; // cycle found

    }

    return false;
}

int main(){

    int v=4;

    vector<vector<int>> edges={ {0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 3} };

    cout<< (isCyclic(v, edges) ? "true cycle-detected" : "false no-cycle") <<endl;

return 0;
}


