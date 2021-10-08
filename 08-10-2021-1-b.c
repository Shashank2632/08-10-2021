#include<stdio.h>
int main()
{
    int age,eligible;
    printf("enter your age:");
    scanf("%d",&age);
    eligible=(age>18)?(printf("you are eligible to vote")):(printf("You are not eligible to vote"));
    
}