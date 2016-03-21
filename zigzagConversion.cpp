/**

The string "PAYPALISHIRING" is written in a 
zigzag pattern on a given number of rows like this: 
(you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

**/

class Solution {
public:
    string convert(string s, int numRows) 
    {
        int n = s.size();
        if(numRows<=1 || numRows>=n)
            return s;
        int gap = (numRows-1)<<1;
        int gapTmp = 0;
        int next = 0;
        string ret;
        for (int i = 0; i < numRows; ++i) 
        {
            ret.push_back(s[i]); 
            if (i != numRows - 1)
                gapTmp = ((numRows - i - 1) << 1);
            else 
                gapTmp = gap;
            next = i + gapTmp;
            while (next < n) 
            {
                ret.push_back(s[next]);
                if (i != 0 && i != numRows - 1)
                    gapTmp = gap - gapTmp;
                next = next + gapTmp;
            }
        }
        return ret;
    }
};