#include <stdio.h>
#include <stdlib.h>

void compare(int array[],int size)
{
 int i,j,temp;
 for(i=0;i<size-1;i++)
 {  for(j=0;j<size-1-i;j++)
    {   if(array[j]>array[j+1])
        {   temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
 }
}

int main()
{
int N,i;
int numbers[100];
printf("please enter how many numbers in the random series:");
scanf("%d",&N);
srand(time(0));
for(i=0;i<N;i++)
{
    numbers[i]=rand()%100;
    printf("%d\n",numbers[i]);
}

compare(numbers,N);
printf("numbers from min to max:\n");
for(i=0;i<N;i++)
{
    printf("%d\n",numbers[i]);
}

return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

 void yerdegistir(int x,int y)
 {
     int gecici;
     gecici=x;
     x=y;
     y=gecici;

 }








int main()
{
    Kullanýcý tarafýndan girilen tamsayýlar x ve y deðiþkenlerinde tutulmaktadýr.X ve Y deðiþkenlerinde
    yer alan deðerlerin yerlerinin deðiþtirilmesini saðlayan fonksiyon prototipi aþaðýda verilmiþtir.
    Uygun C programýný ve fonksiyonunu yazýnýz
    void yerdegistir(int x int y);
    int x,y;
    printf("Lutfen 2 adet sayi gir\n");
    scanf("%d%d",&x,&y);
    printf("x:%d y:%d\n",x,y);
    yerdegistir(x,y);
    printf("x:%d y:%d",x,y);

    return 0;
} */
