#include <stdio.h>
 int main()
 {
     int i,j,k=1,mark[3][3];
     printf("Hi anu!\n");
     printf("Enter marks of students:");
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     scanf("%d",&mark[i][j]);
     
     for(i=0;i<3;i++)
     {
         printf("\nMarks of student %d is:" , k);
         for(j=0;j<3;j++)
     printf("%4d",mark[i][j]);
     k=k+1;
 }
return 0;
}
Hi anu!
Enter marks of students:98 97 95 96 80 84 70 84 99

Marks of student 1 is:  98  97  95
Marks of student 2 is:  96  80  84
Marks of student 3 is:  70  84  99

=== Code Execution Successful ===
