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
   for(int j=0;j<m;j++){
    if(j%2==0)
      {
        for(int i=n-1;i>=0;i--){
         printf("%d ",arr[i][j]);
      }
    }else{
         for(int i=0;i<n;i++){
         printf("%d ",arr[i][j]);
      }
   }  
}
return 0;
}