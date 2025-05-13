#include <stdio.h>
int n;
int main() {
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
    {
    printf("The number is divisible by both 5 and 3",n);
}
}
