#include <stdio.h>
int marks;
int main() {
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>75)
    {
    printf("Distinction");
}
else if (marks>=40<75){
    printf("pass");
}
else{
    printf("fail");
}
}
Enter the marks:90
Distinction

=== Code Execution Successful ===
