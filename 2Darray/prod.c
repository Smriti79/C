#include<stdio.h>
int main(){
   int m,n,p,q;
   //matrix A
   printf("Data of matrix A\n");
    printf("Enter the number of Rows: ");
    scanf("%d",&m);
    printf("Enter the number of Columns: ");
    scanf("%d",&n);
    int arr[m][n];
    //input of matrix A
   printf("Enter the elements of the matrix A: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
               scanf("%d",&arr[i][j]);
        }
    }
   //matrix B
   printf("Data of matrix B\n");
    printf("Enter the number of Rows: ");
    scanf("%d",&p);
    printf("Enter the number of Columns: ");
    scanf("%d",&q);
    int brr[p][q];
    //input of matrix B
      printf("Enter the elements of the matrix B: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
               scanf("%d",&brr[i][j]);
        }
    }
//check
    if(n!=p){
        printf("The matices cannot be multiplied\n");
    }else{
    //print matrix A and B
    printf("The Matrix A: \n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("The Matrix B: \n");
        for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    //multiplying

    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
             res[i][j]=0;
             //i row of matrix A and j column of matrix B
         for(int k=0;k<n;k++){
            res[i][j] += arr[i][k] * brr[k][j];
         }
        }
    }
    // print
    printf("The resultant product matrix \n");
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
           printf("%d ",res[i][j]);
         }
         printf("\n");
       }
    }
    return 0;
}
