/**
Given an integer n, count the total number of digit 1 
appearing in all non-negative integers less than or equal to n.

For example:
Given n = 13,
Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13.
**/

class Solution {
public:
    
    int numDigits(int n)
    {
        return( (int)(log10(n)+1) );
    }

    int countDigitOne(int n) 
    {
        if(n <= 0)
            return 0;
        if(n < 10)
            return 1;
        
        int x =  (int) pow(10, numDigits(n) - 1);
        
        int mul = n / x;
        
        return ( (mul*countDigitOne(x-1)) + ((mul==1) ? n-x+1 : x) + (countDigitOne(n % x)));
    }
};