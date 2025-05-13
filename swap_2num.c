#include <stdio.h>
int main(){
 int a,b;
 printf("Enter two numbers: ");
 scanf("%d %d", &a,&b);
 
a=a+b;
b=a-b;
a=a-b;
printf("After swapping: a=%d,b=%d\n",a,b);
return 0;
}
Enter two numbers: 3 5
After swapping: a=5,b=3


=== Code Execution Successful ===
