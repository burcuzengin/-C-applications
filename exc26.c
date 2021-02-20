#include <stdio.h>

int main()
{
int i,j;

int matrix[10][10];
for(j=0;j<10;j++)
{
        matrix[0][j]=j+1;
}

for(i=1;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        matrix[i][j]=matrix[0][j]*(i+1);
    }
}

 printf("%4c",'I');
 for(i=1;i<=10;i++)
 {
     printf("%4d",i);
 }
 printf("\n");
for(i=0;i<12;i++)
{
    printf("----");
}
printf("\n");
for(i=0;i<10;i++)
{   printf("%4d",i);
    for(j=0;j<10;j++)
    {
        printf("%4d",matrix[i][j]);
    }
    printf("\n");
}
return 0;
}
