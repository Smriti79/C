#include <stdio.h>
#include<limits.h>

int main(){
    int r,c;
    printf("Enter the number of Rows: ");
    scanf("%d",&r);
    printf("Enter the number of Columns: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the elements of the matrix:(Only 0 and 1) \n");
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
    
    int maxcount = 0;
    int row_index=INT_MIN;
    for(int i=0;i<r;i++){
        int count = 0;
        for(int j=0;j<c;j++){
           if(arr[i][j]==1) count++;
        }
        if(maxcount < count){
            maxcount=count;
             row_index=i;
        }
    }
    printf("Max number of 1's of the matrix are in %d index which is %d\n ",row_index,maxcount);
 
    return 0;
}