#include <stdio.h>

int main() {
    int num,i=1;
    printf("Enter the value of n:");
    scanf("%d",&num);
    do{
    printf("%d*%d=%d\n",num,i,num*i);  
    i++;
    }while(i<=10);
    }
Enter the value of n:5
5*1=5
5*2=10
5*3=15
5*4=20
5*5=25
5*6=30
5*7=35
5*8=40
5*9=45
5*10=50


=== Code Execution Successful ===
