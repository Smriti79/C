#include <stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the number of Rows: ");
    scanf("%d",&r);
    printf("Enter the number of Columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
               scanf("%d",&a[i][j]);
        }
    }
    // printf("The Matrix: \n");
    //     for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    int max = INT_MIN;
    int maxrow=0,maxcol=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
              if(a[i][j] > max){
             max = a[i][j];
             maxrow=i;
             maxcol=j;
              }
        }
     }
       printf("Largest element of matrix is %d and the position is (%d,%d) ",max,maxrow,maxcol);
    return 0;
}