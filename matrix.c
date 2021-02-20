#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
int n;
int i,j;


printf("please enter the square of a positive integer:\n");
scanf("%d",&n);

double b = sqrt(n);

while(b - (int)b != 0)
{
printf("Error!\nplease enter again proper number:\n");
scanf("%d",&n);
b = sqrt(n);
}

int a = sqrt(n);
int matrix[a][a];

for(i=0;i<a;i++)
{
  for(j=0;j<a;j++)
  {
    matrix[i][j]=rand()%100;
  }
}

for(i=0;i<a;i++)
{
  for(j=0;j<a;j++)
  {
    printf("%d  ",matrix[i][j]);
  }
  printf("\n");
}

int totalrow=0;
int totalcolumn=0;

for(int x=0;x<a;x++)
{
  for(i=0;i<a;i++)
  {
    totalrow += matrix[x][i];
    totalcolumn += matrix[i][x];
  }
  printf("sum of %d. row is: %d\n",x+1,totalrow);
  printf("sum of %d. column is: %d\n",x+1,totalcolumn);
}

int totaldiagonal=0; 

for(i=0;i<a;i++)
{
  totaldiagonal += matrix[i][i];
}
printf("sum of diagonal is: %d\n ",totaldiagonal);

  return 0;
}