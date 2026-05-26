#include<stdio.h>
#include<string.h>
int myAtoi(char* s) {
    long long result = 0;
    int len = strlen(s);
    while(*s==' ')s++;
    if((*s<'0'||*s>'9')&&*s!=' '&&*s!='+'&&*s!='-')
        return 0;
    if(*s == '\0')return 0;
    int flag = (*s == '-'?-1:1);
    if(*s<'0'||*s>'9')s++;
    while(*s=='0')s++;
    while(*s!='\0'&&(*s>='0'&&*s<='9'))
    {
        result *= 10;
        result += *s - '0';

        if(result*flag>2147483647)
            return 2147483647;
        if(result*flag<-2147483648)
            return -2147483648;
        s++;
    }
    return result*flag;
}
int main()
{
    printf("%d",myAtoi("21474836460"));






    return 0;
}