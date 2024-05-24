// Q.1 Write a Program to find the length of a string using a Pointer.
// For example,
// Input:
// Enter any string: hello world

// Output:
// The length of a string is: 11
#include<stdio.h>
#include<string.h>
void fu(char *str){
int length=strlen(str);
printf("The length of the string:=%d",length);
}

int main(){

  char str[50];
  printf("Enter a string:=");
  gets(str);

  fu(str);
}