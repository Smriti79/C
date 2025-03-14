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
   printf("\n");
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int totalele = m*n;
    int count = 0;
    while(count<totalele){
        // print minr
        for(int j=minc;j<=maxc && count<totalele;j++){
          printf("%d ",arr[minr][j]); 
          count++; 
        }
        minr++;
        //print maxc
        for(int i=minr;i<=maxr && count<totalele;i++){
            printf("%d ",arr[i][maxc]);
            count++; 
        }
        maxc--;
        //print maxr in reverse
        for(int j=maxc;j>=minc && count<totalele;j--){
            printf("%d ",arr[maxr][j]);
            count++; 
        }
        maxr--;
        //print minc
        for(int i=maxr;i>=minr && count<totalele;i++){
            printf("%d ",arr[i][minc]);
            count++; 
        }
        minc++;
    }

   return 0;
   }


