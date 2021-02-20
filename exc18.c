#include <stdio.h>
//#include <string.h>
#define SIZE 100
int main()
{
char sentence[SIZE];
int i;
printf("enter the sentence\n");
gets(sentence);
int character=0;
//int character=strlen(sentence);
for(i=0;i<SIZE;i++)
{   if(sentence[i]!='\0')
    { character++;
    }
    else
    {
        break;
    }
}
printf("this sentence has %d characters.",character);


return 0;
}
