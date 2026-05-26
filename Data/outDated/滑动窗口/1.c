// 1456. 定长子串中元音的最大数目

int VowelTable[256] = {};
int maxVowels(char* s, int k) {
    VowelTable['a'] = VowelTable['e'] = VowelTable['i'] = VowelTable['o'] = VowelTable['u'] = 1;
    char * p = s , * p1 = s + k - 1;
    int count = 0;
    for(char * ch = p;ch!=p1+1;ch++)
    {
        if(VowelTable[*ch])
            count ++;
    }
    int maxCount = count;
    while(*p1 != '\0')
    {
        if(!VowelTable[*p]&&VowelTable[*(p1+1)])
            count ++;
        if(VowelTable[*p]&&!VowelTable[*(p1+1)])
            count --;

        if(count>maxCount)maxCount = count;
        p++,p1++;
    }
    return maxCount;
}