#include<iostream>
bool isPalindrome(int x) {
    long long turned = 0;
    while(x)
    {
        turned *= 10;
        turned += x % 10;
        x/=10;
    }
    if(turned == x)return true;
    return false;
}
int main()
{
    isPalindrome(121);
    return 0;
}