#include <stdio.h>
// #include<limits.h>
int main(){
    int r,c;
    printf("Enter the number of Rows: ");
    scanf("%d",&r);
    printf("Enter the number of Columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
               scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix: \n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // int a,b;
    // printf("Enter the number of Row: ");
    // scanf("%d",&a);
    // printf("Enter the number of Column: ");
    // scanf("%d",&b);
    // int arr[a][b];
    // int max = INT_MIN;


    int sum0 = 0;
    //  for(int i=0;i<2;i++){
        for(int j=0;j<c;j++){
            int i=0;
              sum0 += arr[i][j];
              }
        int sum1 = 0;
     for(int j=0;j<c;j++){
            int i=1;
              sum1 += arr[i][j];
     }
     int sum2 = 0;
     for(int j=0;j<c;j++){
            int i=2;
              sum2 += arr[i][j];
     }
    if(sum0<sum1){
        printf("Sum of matrix is %d",sum1);
    }else if(sum1<sum2){
printf("Sum of matrix is %d",sum2);
    }
 
    return 0;
}