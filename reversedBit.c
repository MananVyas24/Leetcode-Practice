/*
    Reverse bits of a given 32 bits unsigned integer.

    For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

    Follow up:
    If this function is called many times, how would you optimize it?

*/

/*
// Uing a lopp, O(log N)
uint32_t reverseBits(uint32_t n) 
{
    uint32_t bitLength = sizeof(n) * 8;
    uint32_t reversedNum = 0, i, temp;
    
    for(i=0; i<bitLength; ++i)
    {
        temp = n & (1 << i);
        if(temp)
            reversedNum |= (1 << (bitLength - 1) - i);
    }
    return reversedNum;
}
*/

// More optimized without using extra vars
// Stil O(log N)
uint32_t reverseBits(uint32_t n) 
{
    uint32_t bitLength = sizeof(n) * 8;
    uint32_t reversedNum = 0, i;
    
    for(i=0; i<bitLength; ++i)
    {
        if(n & (1 << i))
            reversedNum |= (1 << (bitLength - 1) - i);
    }
    return reversedNum;
}






