/*
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?
*/


class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> t(rowIndex + 1, 1);
        for(int i=1; i<=rowIndex; ++i)
        {
            int mem = 1;
            for(int j=1;j<=i-1; ++j)
            {
                int temp = t[j];
                t[j] += mem;
                mem = temp;
            }
        }
        return t;
    }
};