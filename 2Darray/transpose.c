#include <stdio.h>

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
    int brr[c][r];
  printf("Transpose of the input matrix: \n");
  for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
            printf("%d ",brr[i][j]);
        }
        printf("\n");
  }
 
    return 0;
}