#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    char Turned[10000];
        for(int i = strlen(str)-1;i>=0;i--)
            sprintf(Turned,"%c",str[i]);
        str[strlen(str)] = '\0';

    printf("%s",Turned);
    return 0;
}