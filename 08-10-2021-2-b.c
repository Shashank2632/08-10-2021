#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a<0||b<0||c<0)
    printf("Invalid input");
    else
    {
        largest=(a>b)?(a>c?a:c):(b>c?b:c);
        printf("The largest is %d\n",largest);
    }
    return 0;
}