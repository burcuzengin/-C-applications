#include <stdio.h>

int perfect_number_check(int a)
{
int i;
int sum=0;
for(i=1;i<a;i++)
{   if(a%i==0)
    {
        sum+=i;
    }
}
    if(sum==a)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
int number;
printf("please enter a number:");
scanf("%d",&number);
int x= perfect_number_check(number);
switch(x)
{
    case 1:printf("number is a perfect number.");
    break;
    case -1:printf("number is not a perfect number.");
    break;
    default:
    break;
}
return 0;
}
