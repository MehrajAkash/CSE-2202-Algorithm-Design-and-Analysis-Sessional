
#include<bits/stdc++.h>
using namespace std;

int maxCoins(vector<vector<int>> &grid){

    int row = grid.size();
    int col = grid[0].size();

    vector<vector<int>> dp( row, vector<int>(col, 0) );
    dp[0][0]=grid[0][0];

    /// first row
    for(int j=1; j<col; j++)dp[0][j] = dp[0][j-1]+grid[0][j];

    /// first column
    for(int i=1; i<row; i++)dp[i][0] = dp[i-1][0]+grid[i][0];

    for(int i=1; i<row; i++){
        for(int j=1; j<col; j++){
            dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + grid[i][j];
        }
    }


    return dp[row-1][col-1];
}

int main(){

    vector<vector<int>> grid={
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 1, 1},
        {1, 0, 0, 1}
    };

    cout<<"Maximum coins collected: "<< maxCoins(grid) <<endl;


return 0;
}

