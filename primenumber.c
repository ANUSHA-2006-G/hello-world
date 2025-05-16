#include <stdio.h>
int i,num,isprime=1;
int main()
{
    printf("Enter the sum starting form positive number:");
    scanf("%d", &num);
    if(num<=1){
        isprime=0;
    }
    for(i=2;i<num/2;i++){
        if (num% 2==0){
            isprime=0;
        }
    }
    if(isprime){
            printf("its a prime number",num);
        }
        else{
            printf("its not a prime number",num);
        }
    }
Enter the sum starting form positive number:11
its a prime number

=== Code Execution Successful ===
