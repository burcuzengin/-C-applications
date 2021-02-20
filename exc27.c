#include <stdio.h>
#include <string.h>

palindrom_check(char a[],int size)
{
int i,j;
int palindrom=1;
for(i=0,j=size-1;i<j;i++,j--)
{
    if(a[i]!=a[j])
    {   palindrom=0;
        printf("this word is not palindromic.");
        break;
    }
}
if(palindrom==1)
{
    printf("this word is palindromic.");
}
}

int main()
{
char word[20];
printf("please enter the word the check whether it is palindromic:");
gets(word);
int length=strlen(word);
palindrom_check(word,length);
return 0;
}
