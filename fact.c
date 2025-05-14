#include <stdio.h>
int main() {
    int n,fact=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if (n==0){
        return 1;
    }
    else{
        for(int i=1;i<=n; ++i){
            fact*=i;
        }
      printf("The fact is %d",fact);
    }
}
Enter the number:
5
The fact is 120

=== Code Execution Successful ===    
