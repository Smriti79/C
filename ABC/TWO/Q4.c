#include <stdio.h>


int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0; 
    }
}

int dayNumber(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayNum = 0;
    
    
    if (leap(year)) {
        daysInMonth[1] = 29;
    }
    
    
    for (int i = 0; i < month - 1; i++) {
        dayNum += daysInMonth[i];
    }
    
  
    dayNum += day;
    
    return dayNum;
}

int main() {
    int day, month, year;
    
    
    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);
    
    int dayNum = dayNumber(day, month, year);
    printf("The day number is: %d\n", dayNum);
    
    return 0;
}