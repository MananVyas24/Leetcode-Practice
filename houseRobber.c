/**
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that 
adjacent houses have security system connected and it will automatically 
contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, 
determine the maximum amount of money you can rob tonight without alerting the police.

**/

int rob(int* nums, int numsSize) 
{
    int A = nums[0];
    int M = 0;
    
    for(int i=1; i<numsSize; i++)
    {
        int newM;
        if(A > M)
            newM = A;
        else
            newM = M;
        A = M + nums[i];
        M = newM;
    }
    return (A > M ? A : M);
}