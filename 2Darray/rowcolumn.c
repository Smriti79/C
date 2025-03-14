#include<stdio.h>
int main(){
   
    int arr[4][2]={1,33,2,44,3,55,4,66};
    printf("Roll no.\tMarks\n");
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        printf("%d               ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}