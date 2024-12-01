#include<stdio.h>
int reverse(long long x) {
    int flag = 1;
    long long turned = 0;
    
    if(x<0)
    {
        flag = -1;
        x = -x;
    }
    
    while(x)
    {
        turned *= 10;
        turned += x% 10;
        x/=10;
    }
    if((turned)>2147483647-1||turned*(flag)<-2147483647)
        return 0;

    return turned*flag;
}
int main()
{
    printf("%lld",reverse(1534236469));






    return 0;
}