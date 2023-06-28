bool isValid(int matrix[9][9], int row, int col, int c) {
  for (int i = 0; i < 9; i++) {
    if (matrix[i][col] == c)
      return false;
    if (matrix[row][i] == c)
      return false;
    if (matrix[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
}
bool isItSudoku(int matrix[9][9]) {
    for(int i=0; i<9; i++)
      for (int j = 0; j < 9; j++) {
        if (!matrix[i][j]) {
          for (int val = 1; val <= 9; val++) {
            if (isValid(matrix, i, j, val)) {
                matrix[i][j]=val;
                if(isItSudoku(matrix)) return true;
                else
                matrix[i][j]=0;
            }
          }
          return false;
        }
      }
      return true;
}
