#include <stdio.h>
#include<string.h>
int i,n;
int each(char arr[n])
{
    for(i=0;i<n;i++)
{
printf("%c",arr[i]);
}
}
    int main()
    {
        char arr[]={"Anu"};
        n=strlen(arr);
        int res=each(arr);
        return 0;
    }
Anu

=== Code Execution Successful ===
