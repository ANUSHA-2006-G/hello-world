#include <stdio.h>
int year;
int main() {
    printf("Enter a year:");
    scanf("%d",&year);
    if((year%1==0)&&(year%100!=0)||(year%100==0)){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year");
    }
}
Enter a year:2024
2024 is a leap year

=== Code Execution Successful ===
