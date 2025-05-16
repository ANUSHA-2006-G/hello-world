#include <stdio.h>
#include <math.h>
int i,num,isprime=1;
int main()
{
    printf("Enter a number:");
    scanf("%d", &num);
    if(num<=1){
        isprime=0;
    }
    int limit=sqrt(num);
    for (i=0;i<=limit;i++){
    if(num%2==0){
    isprime=0;
        }
    }
    if(isprime){
            printf("its a prime number",limit);
        }
        else{
            printf("its not a prime number",limit);
        }
    }
Enter a number:2
its not a prime number

=== Code Execution Successful ===
