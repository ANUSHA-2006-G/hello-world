#include <stdio.h>
int a,b,c,ch;
int main(){
  printf("Enter the value of a and b");
  scanf("%d%d",&a,&b);
 printf("\n.Addition\n2.substraction\n3.Multiplication\n4.Division\n") ;
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
     case 1:c=a+b;
     printf("The result is %d:",c);
     break;
     case 2:c=a-b;
     printf("The result is %d:",c);
     break;
     case 3:c=a*b;
     printf("The result is %d:",c);
     break;
     case 4:c=a/b;
     printf("The result is %d:",c);
     break;
     default:printf("Enter the value between 1 to 4\n");
 }
}
Enter the value of a and b5 3

.Addition
2.substraction
3.Multiplication
4.Division
Enter your choice:
