#include <stdio.h>
int main()
{
int i;
double bunnies=1042;
double birds=2272;
double rate_bunny=0.038;
double rate_bird=0.012;

for(i=1;;i++)
{
    bunnies+=bunnies*rate_bunny;
    birds+=birds*rate_bird;
    if(bunnies>=birds)
    {
        printf("%d years must pass.",i);
        break;
    }
}

return 0;
}
