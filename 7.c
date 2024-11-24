#include<stdio.h>
long long reverse(int x) {
    long flag = 1;
    long long turned = 0;
    if(x<0)
    {
        flag = -1;
        x = -x;

    }
    
    while(x)
    {
        if(turned*10>2e31)
            return 0;
        turned *= (long long)10;
        turned += (long long)x% 10;
        x/=10;
    }
    if((turned)>2e31-1)
        return 0;
    return turned*flag;
}
int main()
{
    printf("%lld",reverse(1534236469));






    return 0;
}