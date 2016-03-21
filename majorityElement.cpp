/**
Given an array of size n, find the majority element. 
The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.
**/

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       std::sort(nums.begin(), nums.end());
       
       int len = nums.size();
       int mid = len/2;
       
       return (len % 2 == 0 ? (nums[mid] + nums[mid-1]) / 2 : nums[mid]);
    }
};