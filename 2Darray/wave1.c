#include <stdio.h>
int main(){
    int m,n;
    printf("Enter rows of matrix: ");
    scanf("%d",&m);
    printf("Enter columns of matrix: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of the matrix \n");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
         scanf("%d",&arr[i][j]);
    }
   }
   //wave
   printf("Wave printing of the matrix \n");
   for(int i=0;i<m;i++){
    if(i%2==0){
         for(int j=0;j<n;j++){
         printf("%d ",arr[i][j]);
      }
    }else{
        for(int j=n-1;j>=0;j--){
         printf("%d ",arr[i][j]);
      }
    }
   
    printf("\n");
   }
   return 0;
}