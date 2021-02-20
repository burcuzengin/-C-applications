#include <stdio.h>
#include <stdlib.h>

void add_number(int array[],int size,int newnumber,int order)
{
int i;
for(i=size-1;i>=order-1;i--)
{
    array[i+1]=array[i];
}
array[order-1]=newnumber;
}

int main()
{
int N,i,order,x;
printf("how many numbers will be in the series?\n");
scanf("%d",&N);
int numbers[N];
srand(time(0));
for(i=0;i<N;i++)
{
    numbers[i]=rand()%1000;
    printf("%d\n",numbers[i]);
}
printf("enter the order of the number and the number you want to add:\n");
scanf("%d%d",&order,&x);
add_number(numbers,N,x,order);
for(i=0;i<=N;i++)
{
    printf("%d\n",numbers[i]);
}
return 0;
}
