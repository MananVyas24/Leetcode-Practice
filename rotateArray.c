/**
Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
**/

void reverse(int* arr, int start, int end) 
{ 
    for (int i = start; i <= (start + end)/2 && i < (end - i + start); i++)
    {
        int temp = arr[end-i+start];
        arr[end-i+start] = arr[i];
        arr[i] = temp;
        //swap(arr, i, end - i + start);
    }
}

void rotate(int* nums, int numsSize, int k) 
{
    k %= numsSize;
    reverse(nums, 0, numsSize-k-1);
    reverse(nums, numsSize-k, numsSize-1);
    reverse(nums, 0, numsSize-1);
}