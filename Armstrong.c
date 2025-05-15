#include <stdio.h>
int main() {
   int num,result=0,remainder,original;
   printf("Enter the integer");
   scanf("%d",&num);
   original=num;
   while(num!=0){
       remainder=num%10;
       result+=remainder*remainder*remainder; 
       num/=10;
}                                                                        
   if  (result==original)
       printf("%d is an Armstrong number.\n",original);
   else{
       printf("%d is not the Armstrong number.\n",original);
   }
   }
   Enter the integer153
153 is an Armstrong number.


=== Code Execution Successful ===
