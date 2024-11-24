int lengthOfLongestSubstring(char* s) {
    int slen = strlen(s);
    char * beg = s,*end = s;
    int max_count = 1;
    int count = 1;
    if(slen == 0)
        return 0;
    while(beg!=&s[slen+1]&&end!=&s[slen])
    {
        int flag = 1;
        for(char * p = beg;p<=end;p++)
        {
            if(*(end+1)==*p||*(end+1)=='\0')
            {
                flag = 0;
            }
        }
        if(flag == 1)
        {    
            count++;
            end++;
        }
        else 
        {
            if(count>max_count)
            {
                max_count = count;
            }
            beg++;  
            end = beg;
            count = 1;
            continue;
        }
    }
    return max_count;
}