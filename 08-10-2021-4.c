#include<stdio.h>
int main()
{
    int rank;
    printf("Enter your rank:\n");
    scanf("%d",&rank);
    if(rank<=3250)
    printf("You are eligible for all branches");
    else if(rank>3250 && rank<=6505)
    printf("You are eligible for ISE,EandC and MEC");
    else if(rank>6505 && rank<=12012)
    printf("You are eligible for EandC and MEC");
    else if(rank>12012 && rank<=22340)
    printf("You are eligible for MEC");
    else if(rank>22340)
    printf("You are Not eligible for any branch");
    return 0;
}