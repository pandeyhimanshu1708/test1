// WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10000];
    int i;
    printf("enter the string:");
    scanf("%s",&str);
    printf("Length of the string is %ld",strlen(str));
    return 0;
}