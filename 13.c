// #include<stdio.h>
// int table[256];
// int romanToInt(char* s) {
//     int sum = 0;
//     table['I'] = 1;
//     table['V'] = 5;
//     table['X'] = 10;
//     table['L'] = 50;
//     table['C'] = 100;
//     table['D'] = 500;
//     table['M'] = 1000;
//     char * p = s;
//     while(*(p)!='\0')
//     {
//         if(*(p+1)!=*p)
//         {
//             if(*(p+1)=='\0')
//             {
//                 sum += table[*p];
//                 break;
//             }
//             if(table[*(p+1)]<table[*p])
//             {
//                 sum += table[*(p+1)] + table[*p];
//                 p+=2;
//             }
//             if(table[*(p+1)]>table[*p])
//             {
//                 sum += table[*(p+1)] - table[*p];
//                 p+=2; 
//             }
//         }
//         if(*(p+1)==*p)
//         {
//             sum += table[*p];
//             p++;
//         }
//     }
//     return sum;
// }
#include<stdio.h>
#include<string.h>
int table[256] = {};
int romanToInt(char* s) {
    int sum = 0;
    table[0] = 0;
    table['I'] = 1;
    table['V'] = 5;
    table['X'] = 10;
    table['L'] = 50;
    table['C'] = 100;
    table['D'] = 500;
    table['M'] = 1000;
    char * p = s+strlen(s)-1;
    while(p+1!=s)
    {
        if(*p==*(p-1)&&*p=='X')
        {
            (*p) = 0;
            *(p-1) = 0;
            sum+=20;
        }
        p--;
    }
    p = s+strlen(s)-1;
    while(p!=s-1)
    {
        if(p==s)
        {
            sum += table[*p];
            break;
        }
        
        if(*(p-1)!=*p)
        {
            
            if(table[*(p-1)]<table[*p])
            {
                sum += table[*p] - table[*(p-1)];
                p-=2;
                continue;
            }
            if(table[*(p-1)]>table[*p])
            {
                sum += table[*p] + table[*(p-1)];
                p-=2; 
                continue;
            }
        }
        if(*(p-1)==*p)
        {
            sum += table[*p];
            p--;
        }
    }
    return sum;
}
int main()
{
    printf("%d",romanToInt("MMCDXXV"));






    return 0;
}