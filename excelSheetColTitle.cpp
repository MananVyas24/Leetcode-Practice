/**
Given a positive integer, 
return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
**/

class Solution {
public:
    string convertToTitle(int n) 
    {
       string title = "";
       while(n > 0)
       {
           int r = n % 26;
           //printf("%d",r);
           if(r == 0)
           {
               title = (char)'Z' + title;
               n = (n/26) - 1;
           }
           else
           {
               title = (char)((r-1) + 'A') + title;
               n = n/26;
           }
        }
        return title;    
    }
};