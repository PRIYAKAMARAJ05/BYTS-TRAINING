class Solution{
  public int[][] transpose(int[][] matrix){
    int a=matrix.length,b=matrix[0].length;
    int mat[][] = new int[b][a];
    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        mat[j][i]=matrix[i][j];
      }
    }
    return mat;
  }
}
