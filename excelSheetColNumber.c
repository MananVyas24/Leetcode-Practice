/**
Related to question Excel Sheet Column Title

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
**/

int titleToNumber(char* s) 
{
    int i=0;
    while(s[i] == ' ') i++;
    
    int l = strlen(s);
    if(i==l) return -1;
    
    int res = 0;
    
    while(i<l)
    {
        char c = s[i];
        if(c < 'A' || c > 'Z') return -1;
        
        res = res * 26 + c - 'A' + 1;
        i++;
    }
    return res;
}