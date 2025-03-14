#include <stdio.h>

int maze(int cr,int cc,int er, int ec){
     int riway = 0;   int doway = 0;
     if(cr==er && cc==ec) return 1;
    if(cr==er){
        // only right side
         riway += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        //only downwards
         doway += maze(cr+1,cc,er,ec);
    }if(cr<er && cc<ec){
         riway += maze(cr,cc+1,er,ec);
         doway += maze(cr+1,cc,er,ec);
    }
 int totways = riway + doway;
 return totways;
}
int main(){
    int m,n;
    printf("Enter rows of maze: ");
    scanf("%d",&m);
    printf("Enter columns of maze: ");
    scanf("%d",&n);
   int ways = maze(1,1,m,n);
   printf("%d",ways);

   return 0;
   }


