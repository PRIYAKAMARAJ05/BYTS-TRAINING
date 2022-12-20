class Solution {
    public int uniquePaths(int m, int n) {
        int A=n+m-2;
        int B=m-1;
        double res=1;
        for(int i=1;i<=B;i++){
            res=res*(A-B+i)/i;
        }
        return (int)res;
    }
}
