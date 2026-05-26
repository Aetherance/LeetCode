bool isPalindrome(int x) {
    if(x<0)
        return false;
    int temp = x;
    long long turned = 0;
    while(x)
    {
        turned *= 10;
        turned += x % 10;
        x/=10;
    }
    if(turned == temp)return true;
    return false;
}