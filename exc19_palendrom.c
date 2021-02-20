#include <stdio.h>

void string(char str[])
{
printf("please enter something:");
scanf("[^\n]%d",str);
}

int chrctr(char s[])
{
int i;
int character=0;
for(i=0;s[i];i++)
{   if(s[i]!='\0')
    { character++;
    }
    else
    {
        break;
    }
return character;
}}

void blankspace(s[])
{
int i,j;
for(i=0;s[i];i++)
{   if(s[i]!=' ')
    {
        s[j]=s[i];
    }
    s[j]='\0'; //if you dont put this, problems may accur.
}
}


int main()
{

return 0;
}
