#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
char sentence[SIZE];
int count=0;
int i;
printf("enter the sentence\n");
gets(sentence);  //its not useful using scanf for sentences.

for(i=0;i<SIZE;i++)
{   if(sentence[i]==32)
    {
        count++;
    }
}
printf("this sentence has %d words.",count+1);
return 0;
}
