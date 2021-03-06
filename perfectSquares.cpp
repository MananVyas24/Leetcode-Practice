/*
    Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.
    For example, given n = 12, return 3 because 12 = 4 + 4 + 4; given n = 13, return 2 because 13 = 4 + 9.
*/

class Solution {
public:
    int numSquares(int n) 
    {
        // Lagrange's Four-Square Theorem
        // O(sqrt n)
        while(n % 4 == 0)
            n /= 4;
        if(n % 8 == 7)
            return 4;
        for(int i=0; i*i<=n; ++i)
        {
            int j = sqrt(n - i*i);
            if(i*i + j*j == n)
                return (!!i + !!j);
        }
        return 3;
    }
};