// 2379. 得到 K 个黑块的最少涂色次数
 
int minimumRecolors(char* blocks, int k) {
    int moveCountMin = 0;
    char * beg = blocks, *end = beg + k - 1;
    int blacks = 0,moveCount = 0;
    for(char * cur = beg;cur<=end;cur++)
        if(*cur == 'W')moveCount ++;
    moveCountMin = moveCount;
    while(end<blocks+strlen(blocks)-1)
    {
        if(*(end+1) == 'B'&&*beg == 'W')
            moveCount --;
        if(*(end+1) == 'W'&&*beg == 'B')
            moveCount ++;

        if(moveCount<moveCountMin)moveCountMin = moveCount;
        beg ++,end ++;
    }
    return moveCountMin;
}