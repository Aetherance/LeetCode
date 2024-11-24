#include<stdio.h>
int maxArea(int* height, int heightSize) {
    int max = 0;
    int * beg = height,*end = height+1;
    int dist = 0;
    while(beg!=height+heightSize-1)
    {
        while(end!=height+heightSize)
        {
            if(( (*beg>*end)?*end:*beg)*dist>max)
            {
                max = dist*(*beg>*end)?*end:*beg;
            }
            dist ++;
            end ++;
        }
        beg ++;
        end = beg + 1;
    }
    return max;
}
int main()
{
    int arr[100] = {1,8,6,2,5,4,8,3,7};
    printf("%d",maxArea(arr,9));


    return 0;
}