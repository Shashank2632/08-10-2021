#include<stdio.h>
int main()
{
    int a,b,large;
    printf("Enter 2 integers:");
    scanf("%d%d",&a,&b);
    if(a<0||b<0)
    printf("Invalid input");
    else
    {
    if(a>b)
    printf("The largest is %d ",a);
    else
    printf("The largest is %d",b);
    }
}