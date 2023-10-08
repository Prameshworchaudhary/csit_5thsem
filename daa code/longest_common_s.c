#include<stdio.h>

void print_LCS(int m, char b[][m], char X[], int i, int j)
{
   if(i == 0 || j == 0)
        return;
   if(b[i][j] == 'C'){
        print_LCS(m, b, X, i - 1, j - 1);
        printf("%c", X[i - 1]);
   }
   else if(b[i][j] == 'U')
        print_LCS(m, b, X, i - 1, j);
   else
        print_LCS(m, b, X, i, j - 1);
}

int main()
{
    int m, n,i,j;
    printf("Enter the length of sequence X and Y: ");
    scanf("%d %d", &m, &n);
    char X[m], Y[n];
    printf("Enter the characters for the sequence X: ");
    for( i = 0; i < m; i++){
        printf("X[%d]: ", i + 1);
        scanf("%s", &X[i]);
    }
    printf("Enter the characters for the sequence Y: ");
    for(i = 0; i < n; i++){
        printf("Y[%d]: ", i + 1);
        scanf("%s", &Y[i]);
    }
    // Calculation for LCS_length
    char b[m + 1][n + 1];
    int c[m + 1][n + 1];
    for(i = 0; i <= m; i++){
        c[i][0] = 0;
    }
    for( j = 0; j <= n; j++){
        c[0][j] = 0;
    }
    for( i = 1; i <= m; i++){
        for( j = 1; j <= n; j++){
            if(X[i - 1] == Y[j - 1]){
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'C';
            }
            else if(c[i - 1][j] >= c[i][j - 1]){
                c[i][j] = c[i - 1][j];
                b[i][j] = 'U';
            }
            else{
                c[i][j] = c[i][j - 1];
                b[i][j] = 'L';
            }
        }
    }
    //print b and c table
    printf("\nC: %d\n", c[m][n]);
    printf("b: %c\n", b[m][n]);
	printf("\nLongest Common Subsequence is: ");
    print_LCS(n + 1, b, X, m, n);
	printf("\nName: prameshwor chaudhary\tRoll No: 17\n");
    return 0;
}
