#include <stdio.h>
int matChainMul(int arr[], int n) {
   int minMul[n][n];
   int i,j, q,k,L;
   for ( i = 1; i < n; i++)
      minMul[i][i] = 0;
   for ( L = 2; L < n; L++) {
      for ( i = 1; i < n - L + 1; i++) {
         j = i + L - 1;
         minMul[i][j] = 99999999;
         for ( k = i; k <= j - 1; k++) {
            q = minMul[i][k] + minMul[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
            if (q < minMul[i][j])
            minMul[i][j] = q;
         }
      }
   }
   return minMul[1][n - 1];
}
int main(){
   int arr[] = {3, 4, 5, 2, 3, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   printf("\nMinimum number of multiplications is %d ",    matChainMul(arr, size));
   printf("\nName: prameshwor chaudhary\tRoll No: 17\n");
   return 0;
}