/*
    Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

    For example,
    Given nums = [0, 1, 3] return 2.

    Note:
    Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
*/

class Solution 
{
public:
    int missingNumber(vector<int>& nums)
    {
        // Missing number is 
        // l = length of the vector ; X = (l)(l+1)/2
        // Missing number = X - SumOfAllElementsInTheVector
        int len = nums.size();
        int x = (len)*(len + 1) / 2;
        
        for(int i=0 ; i<len; ++i)
            x -= nums[i];
        
        return x;
    }
};