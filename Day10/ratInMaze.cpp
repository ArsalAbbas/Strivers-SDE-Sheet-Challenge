#include <bits/stdc++.h>
void setAns(vector<vector<int>> &res, vector<vector<int>> &path,int n) {
  vector<int> temp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp.push_back(path[i][j]);
    }
  }
  res.push_back(temp);
}
bool isValid(int nrow, int ncol, vector<vector<int>> &maze,
             vector<vector<int>> &path,int n) {
               if(nrow==n || ncol==n) return false;
               if(nrow<0 || ncol<0) return false;
               if(!maze[nrow][ncol]) return false;
               if(path[nrow][ncol]) return false;
               return true;
             }
void solve(vector<vector<int>> &maze, vector<vector<int>> &path, int n,
           int delrow[], int delcol[], vector<vector<int>> &res,int row,int col) {

  if (row == n - 1 && col == n - 1) {
    setAns(res,path,n);
    return;
  }
  for (int i = 0; i < 4; i++) {
    int nrow=row+delrow[i];
    int ncol=col+delcol[i];
    if (isValid(nrow, ncol, maze, path,n)) {
    path[nrow][ncol]=1;
    solve(maze, path, n, delrow, delcol, res, nrow, ncol);
    path[nrow][ncol]=0;
    }
  }
           }
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int>> path(n,vector<int>(n,0));
  vector<vector<int>> res;
  int delrow[]={0,0,-1,1};
  int delcol[]={-1,1,0,0};
  if (maze[0][0]) {
  path[0][0]=1;
  solve(maze, path, n, delrow, delcol, res, 0, 0);
  }
  return res;
}
