bool isSafe(int node, int col, vector<int> &color, vector<vector<int>> &mat) {
  for (int i = 0; i < color.size(); i++) {
  if(i!=node && mat[i][node] && color[i]==col) return false;
  }
  return true;
}

bool solve(int node, vector<vector<int>> &mat, vector<int> &color, int n, int m) {

if (node == n)
  return true;

for (int i = 1; i <= m; i++) {
  if (isSafe(node, i, color, mat)) {
    color[node] = i;
    if (solve(node + 1, mat, color, n, m))
      return true;
    color[node] = 0;
  }
  }
  return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    int n=mat.size();
    vector<int> color(n);
    if(solve(0,mat,color,n,m)) return "YES";
    return "NO";
}
