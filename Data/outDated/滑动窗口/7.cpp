// 1461. 检查一个字符串是否包含所有长度为 K 的二进制子串
// runtime 1458ms
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int TrueCount = pow(2,k);
        map<string,bool>m;
        int beg = 0;
        while(beg + k - 1< s.size())
        {
            string apstr = s.substr(beg,k);
            if(m.count(apstr) == 0)
                m.insert(pair<string,bool>(apstr,true));
            beg ++;
            
        }
        if(TrueCount == m.size())
            return true;
        return false;
    }
};