// 643. 子数组最大平均数 I

double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    int delta;
    int * p = nums, * p1 = nums + k - 1;
    for(int * read = p;read<p1+1;read++)
        sum += *read;
    double aver = (sum * 1.0) / (k * 1.0);
    double maxAver = aver;
    while(p1 != nums + numsSize - 1)
    {
        delta = ((*(p1+1) - *p)*1.0);
        sum += delta;

        aver = (sum*1.0)/(k*1.0);
        if(aver > maxAver)maxAver = aver;
        p++,p1++;
    }
    return maxAver;
}