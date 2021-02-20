#include <stdio.h>

int compare_max(int array[],int size)
{
int max=array[0];
for(int i=0;i<size;i++)
    {  if(array[i]>max)
        { max=array[i];}
    }
    return max;
}

int compare_min(int array[],int size)
{
int min=array[0];
for(int i=0;i<size;i++)
{  if(array[i]<min)
    { min=array[i];}
}
    return min;
}

int main()
{
int total;
printf("enter the total of numbers you want to compare:");
scanf("%d",&total);
int numbers[total]; //define after scanning 'total'*****
for(int i=0;i<total;i++)
{
    printf("enter the numbers\n:");
    scanf("%d",&numbers[i]);
}

printf("The minimum number is:%d",compare_min(numbers,total));
printf("The maximum number is:%d",compare_max(numbers,total));
return 0;
}
