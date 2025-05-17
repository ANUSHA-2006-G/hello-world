File Handling in C
File handling allows reading from and writing to files.
* Types of Files
1. Text Files: Store data in human-readable format.
2. Binary Files: Store data in binary form
*File Operations
1. Opening a File:
FILE *file_pointer = fopen("filename", "mode");
Modes: "r" (read), "w" (write), "a" (append).
Closing a File:
Reading and Writingg to Files:
● Writing to a File:
fprintf(file_pointer, "Text");
fputs("Text", file_pointer);
Reading from a File:
fscanf(file_pointer, "format_specifier", &variable);
fgets(buffer, size, file_pointer);

#include <stdio.h>
int main() {
 FILE *fp = fopen("data.txt", "w");
 if (fp == NULL) {
 printf("Error opening file!\n");
 return 1;
 }
 fprintf(fp, "Hello, File Handling!\n");
 fclose(fp);
 printf("Data written to file successfully.\n");
 return 0;
}

macro: preprocess directives in c program 
types 9f:1)object like macros
2) function like macros

argc: arguments count 
argv:array of string 

syntax:int main(int argc,char*argv[])

command line argument:it allows passing information to a program when it starts execution 

Error handling: identifying and correcting the errors 
1)syntax: defected during compilation 
2)Run-time:occur during execution (divided by zero)
3)logical error: incorrect output due to flawid logic

Debugging 
*using printf
*using debuggers
while (ch=f gets(ch!=EOF))
