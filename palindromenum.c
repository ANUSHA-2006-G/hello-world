#include <stdio.h>
int main() {
   int num,reversed=0,remainder,original;
   printf("Enter the number");
   scanf("%d",&num);
   original=num;
   while(num!=0){
       remainder=num%10;
       reversed = reversed*10 + remainder;
       num/=10;
}                                                                        
   if  (original==reversed){
       printf("%d is the palindrome");
   }
   else{
       printf("%d is not the palindrome");
   }
   }
   Enter the number123
123 is not the palindrome

=== Code Execution Successful ===
