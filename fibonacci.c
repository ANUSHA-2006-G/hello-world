#include <stdio.h>

int main() {
    int n,t1=0,t2=1,next_term;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("fibonacci series");
    for(int i=0;i<n;i++)
    {
        printf("%d",t1);
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
    }
enter the value of n10
fibonacci series0112358132134

=== Code Execution Successful ===
