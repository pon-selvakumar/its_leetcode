class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> DP(grid.size(),vector<int> (grid[0].size()));int su=0;
        DP[0][0]=grid[0][0];
        for(int i=1;i<grid[0].size();i++){
            DP[0][i]=grid[0][i]+DP[0][i-1];
        }
        for(int j=1; j<grid.size();j++){
            DP[j][0]=grid[j][0]+DP[j-1][0];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                DP[i][j]=grid[i][j]+ min(DP[i-1][j],DP[i][j-1]);
            }
        }
        return DP[grid.size()-1][grid[0].size()-1];

    }
};