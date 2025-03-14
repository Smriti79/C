#include <stdio.h>

int main(){
    
    int r,c;
    printf("Enter the number of Rows: ");
    scanf("%d",&r);
    printf("Enter the number of Columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
               scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix: \n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
               printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}