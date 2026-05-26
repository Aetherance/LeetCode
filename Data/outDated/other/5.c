#include<stdio.h>
#include<string.h>
// int main()
// {
//     char str[10000];
//     scanf("%[^\n]",str);

//     printf("%d",strlen(str));

//     int count = 0;

//     char Turned[10000];
//         for(int i = strlen(str)-1;i>=0;i--)
//             sprintf(Turned+(count++),"%c",str[i]);
//         str[strlen(str)] = '\0';

//     printf("%s",Turned);
//     return 0;
// }
int isPalindrome(char * str)
{
    char Turned[10000];
    int count = 0;
    for(int i = strlen(str)-1;i>=0;i--)
        sprintf(Turned+(count++),"%c",str[i]);
    str[strlen(str)] = '\0';
    if(!strcmp(Turned,str))
        return 1;
    return 0;
}
int main()
{
    char str[10000];
    scanf("%[^\n]",str);

    printf("%d",isPalindrome(str));


}