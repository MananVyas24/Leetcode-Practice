/**
Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?
**/

bool isPowerOfThree(int n) 
{
    if( n == pow(3, round(log(n) / log(3))) && n!=0 )
            return true;
    else
        return false; 
}