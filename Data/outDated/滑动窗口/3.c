// 1343. 大小为 K 且平均值大于等于阈值的子数组数目

int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int * p = arr, *p1 = p + k - 1;
    int count = 0;
    int sum = 0;
    double aver = 0;
    for(int * n = p;n<=p1;n++)
        sum += *n;
    aver = (sum*1.0)/(k*1.0);
    if(aver >= threshold)count ++;  
    while(p1 < arr + arrSize-1)
    {
        sum += *(p1+1) - *p;
        aver = (sum*1.0)/(k*1.0);
        
        if(aver >= threshold)count++;

        p++,p1++;
    }


    return count;
}