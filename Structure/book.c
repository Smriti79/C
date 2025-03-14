#include<stdio.h>
#include<string.h>
int main(){
 struct book{
    char name[50];
    float price;
    int pages;
 } a, b, c;

 a.pages=100;
 a.price=411.5;
 strcpy(a.name,"Secret Seven");
printf("%d\n",a.pages);
printf("%.3f\n",a.price);
printf("%s\n",a.name);
 b.pages=82;
 b.price=100.4;
 strcpy(b.name,"Famous Five");
printf("%d\n",b.pages);
printf("%.3f\n",b.price);
printf("%s\n",b.name);
    return 0;
}