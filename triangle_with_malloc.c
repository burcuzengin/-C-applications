#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
    int a;
    int b;
    int c;
};

int main()
{
    int i,j,n,total;
    double area1,area2;
    typedef struct triangle triangle;
    printf("enter a number between 1 and 10:\n");
    scanf("%d",&n);
    while(n<1 || n>10)
    {
        printf("Please enter again properly.");
        scanf("%d",&n);
    }
    triangle *tri = malloc(n * sizeof(triangle));
    for(i=0;i<n;i++)
    {
        tri[i].a=0;
        tri[i].b=0;
        tri[i].c=0;
        while(tri[i].a+tri[i].b-tri[i].c <= 0 || tri[i].a+tri[i].b-tri[i].c <=0 || tri[i].b+tri[i].c-tri[i].a <=0 )
        {
            tri[i].a=1+rand()%50;
            tri[i].b=1+rand()%50;
            tri[i].c=1+rand()%50;
        }

    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            total=(tri[i].a+tri[i].b+tri[i].c)/2;
            int x= total*(total-tri[i].a)*(total-tri[i].b)*(total-tri[i].c);
            area1=sqrt(x);

            total=(tri[j].a+tri[j].b+tri[j].c)/2;
            x= total*(total-tri[j].a)*(total-tri[j].b)*(total-tri[j].c);
            area2=sqrt(x);
            if(area1>area2)
            {
                int hold1,hold2,hold3;
                hold1=tri[i].a;
                hold2=tri[i].b;
                hold3=tri[i].c;

                tri[i]=tri[j];

                tri[j].a=hold1;
                tri[j].b=hold2;
                tri[j].c=hold3;
            }

        }
    }
    int temp=0;
    for(i=0;i<n;i++)
    {
         if(tri[i].b>tri[i].c)
        {
            temp=tri[i].b;
            tri[i].b=tri[i].c;
            tri[i].c=temp;
        }

        if(tri[i].a>tri[i].b)
        {
            temp=tri[i].a;
            tri[i].a=tri[i].b;
            tri[i].b=temp;
        }

        if(tri[i].b>tri[i].c)
        {
            temp=tri[i].b;
            tri[i].b=tri[i].c;
            tri[i].c=temp;
        }
    }


    for (i=0;i<n;i++)
    {
        printf("%d %d %d\n" ,tri[i].a,tri[i].b,tri[i].c);
    }
    free(tri);
    return 0;
}
