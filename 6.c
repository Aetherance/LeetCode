#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char table[10000][10000] = {};
char* convert(char* s, int numRows) {
    char * result = (char*)malloc(strlen(s)+1000);
    int count = 0;
    int i = 1,j = 1;
    while(count<strlen(s))
    {
        for(int t = 0;t<numRows;t++)
        {
            if(count<strlen(s))table[i++][j] = s[count++];
        }
        i--;
        for(int t = 0;t<numRows-2;t++)
        {
            if(count<strlen(s))table[--i][++j] = s[count++];
        }
        i--,j++;
    }

    int length = 0;
    for(int p = 1;p<=1000;p++)
    {
        for(int q = 1;q<=1000;q++)
        {
            if(table[p][q]!='\0')result[length++] = table[p][q];
        }
    }
    result[strlen(s)] = '\0';
    
    return result;
}
int main()
{
    char test[] = "PAYPALISHIRING";
    char * result = convert(test,4);
    printf("%s",result);


    return 0;
}