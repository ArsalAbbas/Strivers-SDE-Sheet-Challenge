void putAns(vector<vector<int>> &grid, vector<vector<int>> &res) {
    vector<int> temp;
    for(int i=0; i<grid.size(); i++)
        for(int j=0; j<grid[i].size(); j++)
            temp.push_back(grid[i][j]);
    res.push_back(temp);
}
bool isSafe(int row, int col, vector<vector<int>> &grid, int n) {
    int duprow=row;
    int dupcol=col;
    while (duprow >= 0 && dupcol >= 0) 
    if(grid[duprow--][dupcol--]) return false;
    dupcol=col;
    duprow=row;
    while(dupcol>=0) 
    if(grid[duprow][dupcol--]) return false;
    dupcol=col;
    duprow=row;
    while(duprow<n && dupcol>=0)
    if(grid[duprow++][dupcol--]) return false;

    return true;
}
void placeQueens(vector<vector<int>> &grid, vector<vector<int>> &res,int col,int n) {
  if (col == n) {
      putAns(grid,res);
      return;
  }
  for (int row = 0; row < n; row++) {
    if (isSafe(row, col, grid, n)) {
        grid[row][col]=1;
        placeQueens(grid,res,col+1,n);
        grid[row][col]=0;
    }
  }
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> grid(n,vector<int>(n,0));
    vector<vector<int>> res;
    placeQueens(grid, res, 0, n);
    return res;
}
