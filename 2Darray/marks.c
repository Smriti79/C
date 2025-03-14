#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int arr[n][3];
  
  
   for(int i=0;i<n;i++){
     printf("Enter marks of the students %d:\n",i+1);
     printf("Physics: ");
     scanf("%d",&arr[i][0]);
     printf("Chemistry: ");
     scanf("%d",&arr[i][1]);
     printf("Maths: ");
     scanf("%d",&arr[i][2]);
}
printf("\nMarksheet of students:\n");
for(int i=0;i<n;i++){
    printf("Student%d\tPhysics %d\tChemistry %d\tMaths %d\n", i+1,arr[i][0],arr[i][1],arr[i][2]);
}
return 0;
}