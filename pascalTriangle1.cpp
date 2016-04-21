/*
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/

class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascalTrg;
        if(numRows < 1)
            return pascalTrg;
        
        vector<int> first(1,1);
        pascalTrg.push_back(first);
        
        for(int i=2; i<=numRows; ++i)
        {
            int mem = 1;
            for(int j=1; j<i-1; ++j)
            {
                int temp = first[j];
                first[j] += mem;
                mem = temp;
            }
            first.push_back(1);
            pascalTrg.push_back(first);
        }
        return pascalTrg;
    }
};