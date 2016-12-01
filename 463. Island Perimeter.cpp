class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int col=grid[0].size();
        int row=grid.size();
        int perimeter=0;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(grid[i][j]==1) {
                    perimeter+=cellsides(grid,i,j);
                }
            }
        }
        return perimeter;
    }
    int cellsides(vector<vector<int>>& grid,int i,int j) {
        int sides=0;
        if(i-1>=0&&grid[i-1][j]==1)
            sides++;
        if(i+1<grid.size()&&grid[i+1][j]==1)
            sides++;
        if(j-1>=0&&grid[i][j-1]==1)
            sides++;
        if(j+1<grid[0].size()&&grid[i][j+1]==1)
            sides++;
        return 4-sides;
    }
};