#include<stdio.h>
int main()
{
    int n,amount;
    printf("enter number of books:\n");
    scanf("%d",&n);
    amount=n*10;
    if(n<=10000)
        printf("no discount,amount=%d\n",amount);
    else if(n>10000 && n<=15000)
        printf("amount after discount=%d",amount-(amount*10/100));
    else if(n>15000 && n<=20000)
        printf("amount after discount=%d",amount-(amount*20/100));
    return 0;

}

