#include <stdio.h>
#include <string.h>

int main(void) {
int number;
int a=2;
int i;

printf("please enter a number:\n");
scanf("%d",&number);

for(i=0;;i++)
{
    if(number%a==0)
    {
        number=number/a;
        if(number==1)
        {
            printf("max prime number is %d",a);
            break;
        }
    }
    else
    {
        a++;
    }
}
return 0;
}