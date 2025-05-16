#include <stdio.h>
int main()
{
    int i,arr[10]={1,2,3,4,5,6},n=6,temp,*start,*end;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    }
654321

=== Code Execution Successful ===
