#include <stdio.h>

void fibonacci_sequence(int size)
{
int seq[size];
seq[0]=0;
seq[1]=1;
int i;
for(i=2;i<size;i++)
{
 seq[i]=seq[i-1]+seq[i-2];
}
for(i=0;i<size;i++)
{
    printf("%d\n",seq[i]);
}
}


int main()
{
int number;
printf("enter the total of numbers to print fibonacci sequence:");
scanf("%d",&number);
fibonacci_sequence(number);

return 0;
}
