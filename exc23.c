#include <stdio.h>

void floyd_triangle(int a)
{
int i,j;
int x=1;
for(i=1;i<=a;i++)
{   for(j=0;j<i;j++)
    {
        printf("%d\t",x);
        x++;
    }
    printf("\n");
}


}


int main()
{
int lines;
printf("enter how many floyd lines you want to see:");
scanf("%d",&lines);
floyd_triangle(lines);
return 0;
}
