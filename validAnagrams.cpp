/*
    Given two strings s and t, write a function to determine if t is an anagram of s.

    For example,
    s = "anagram", t = "nagaram", return true.
    s = "rat", t = "car", return false.

    Note:
    You may assume the string contains only lowercase alphabets.

    Follow up:
    What if the inputs contain unicode characters? How would you adapt your solution to such case?

*/

// O(N log N) solution, invoves sorting. Can we do better ?
/*
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        // Sort the 2 strings and compare
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
        
    }
};
*/

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        /* // Sort the 2 strings and compare
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t); */
		
		// Better solution : O(N) Time and O(1) space
		
		// 1. Check size equal, if unequal then no need to check further
		if(s.length() == 0 && t.length() == 0)
			return true;
		
		if(s.length() != t.length())
			return false;
		
		// 2. Create a histogram, for every char in s
		//    increment count (char) of map and for every char in t decrement
		//	  count(char) in the map. 
		int hist[256];
		for(int i = 0; i < 256; ++i)
		    hist[i] = 0;
		
		for(int i = 0; i < s.length(); ++i)
			hist[(unsigned int)s[i]]++;
		for(int i = 0; i < t.length(); ++i)
			hist[(unsigned int)t[i]]--;
		
		for(int i = 0; i < 256 ; ++i)
			if(hist[i] != 0)
				return false;
		
		return true;
    }
};
