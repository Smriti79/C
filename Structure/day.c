#include<stdio.h>
#include<stdbool.h>
int main(){
typedef struct date{
    int day;
    int month;
    int year;
} date;
date a,b;
//a-> 30/06/2004
//b-> 01/01/2025
a.day=30;
a.month=06;
a.year=2004;

b.day=01;
b.month=01;
b.year=2025;

// bool flag=true;
// if(a.day!=b.day) flag=false;
// if(a.month!=b.month) flag=false;
// if(a.year!=b.year) flag=false;
// if(flag==true) printf("The dates are same");
// else printf("The dates are different");

date c;
c=a;


bool flag=true;
if(a.day!=c.day) flag=false;
if(a.month!=c.month) flag=false;
if(a.year!=c.year) flag=false;
if(flag==true) printf("The dates are same");
else printf("The dates are different");

    return 0;
}