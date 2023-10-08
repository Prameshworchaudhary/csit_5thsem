#include<stdio.h>

int main()
{
    int n,i, W;
    printf("Total no. of items: ");
    scanf("%d", &n);
    int wt[n], v[n];
    printf("\nEnter the weight and value corresponding to the item\n");
    for( i = 0; i < n; i++){
        printf("w[%d]: ", i + 1);
        scanf("%d", &wt[i]);
        printf("v[%d]: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\nEnter the capacity of knapsack: ");
    scanf("%d", &W);
    // constructing the value table
    int c[n + 1][W + 1];
    int w;
    for( w = 0; w <= W; w++){
        c[0][w] = 0; // first row
    }
    for(i = 0; i <= n; i++){
        c[i][0] = 0;  // first column
    }
    for(i = 1; i <= n; i++){
        for( w = 1; w <= W; w++){
            if(wt[i - 1] <= w){
                if((v[i - 1] + c[i - 1][w - wt[i - 1]]) > c[i - 1][w])
                    c[i][w] = v[i - 1] + c[i - 1][w - wt[i - 1]];
                else
                    c[i][w] = c[i - 1][w];
            }
            else
                c[i][w] = c[i - 1][w];
        }
    }
    printf("\nMaximum profit is: %d\n", c[n][W]);
	printf("\nName: prameshwor chaudhary\tRoll No: 17\n");
    return 0;
}
