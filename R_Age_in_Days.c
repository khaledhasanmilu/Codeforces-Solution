#include<stdio.h>

int main() {
    int day, month, year, rd;
    scanf("%d", &day);
    
    year = day / 365;
    rd = day % 365;
    
    month = rd / 30;
    rd = rd % 30;
    
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", rd);
    
    return 0;
}
