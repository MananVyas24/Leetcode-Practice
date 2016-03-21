/**

Determine whether an integer is a palindrome. Do this without extra space.

**/

class Solution {
public:

    long reverseInt(int x)
    {
        long res = 0;
        while(x > 0)
        {
            res *= 10;
            res += x % 10;
            x /= 10;
        }
        cout<<res;
        return res;
    }
    
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        return((long)x - reverseInt((long)abs(x)) == 0);
    }
};