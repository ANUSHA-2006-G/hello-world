#include <stdio.h>
#include <string.h>
int main(){
    char name[15];
    printf("Enter your name");
    scanf("%s",&name);
    int length=strlen(name);
    printf("%d\n", length);
    strcpy (name,"Anusha");
    printf("%s",name);
    int compare=strcmp("array","Anusha");
    printf("%d",compare);
    return 0;
}
Enter your nameanusha
6
Anusha1

=== Code Execution Successful ===
