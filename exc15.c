#include <stdio.h>
int main()
{
int x,n,i;
int result=0;

printf("please enter x and n:\n");
scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++)
    {
        result+=((2*i)-1)/pow(x,2*i);
    }
printf("result:%d",result);

return 0;
}
