#include <stdio.h>
#include<limits.h>

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
    
    int max = INT_MIN;
    int row_index=INT_MIN;
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
           sum += arr[i][j];
        }
        if(sum > max){
            max=sum;
            row_index=i;
        }
    }
    printf("The row index having max sum is %d\n",row_index);
    printf("Max sum of the row in the matrix is %d\n",max);
 
    return 0;
}