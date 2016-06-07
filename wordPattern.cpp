/*
 * Given a pattern and a string str, find if str follows the same pattern.
 *  Here follow means a full match, such that there is a bijection between a letter in 
 * pattern and a non-empty word in str.
 * 
 * Examples:
 * 
 * pattern = "abba", str = "dog cat cat dog" should return true.
 * pattern = "abba", str = "dog cat cat fish" should return false.
 * pattern = "aaaa", str = "dog cat cat dog" should return false.
 * pattern = "abba", str = "dog dog dog dog" should return false.
 *                
 */


class Solution 
{
    
private:

    vector<string> split(string str, char delimiter) 
    {
        vector<string> internal;
        stringstream ss(str); // Turn the string into a stream.
        string tok;
        
        while(getline(ss, tok, delimiter)) 
            internal.push_back(tok);
        
        return internal;
    }
    
    
public:

    bool wordPattern(string pattern, string str) 
    {
        unordered_map<char, string> dictionaryOfPatterns;
        unordered_map<string, char> dictionaryOfStrings;
        
        int len = pattern.size();
        vector<string> individualStrings = split(str, ' ');
        
        if (len != individualStrings.size()) return false;
        
        for(int i=0; i<len; i++) 
        {
            char& ch = pattern[i];
            string& s = individualStrings[i];
            
            if (dictionaryOfPatterns.find(ch) == dictionaryOfPatterns.end())
                dictionaryOfPatterns[ch] = s;
            
            if (dictionaryOfStrings.find(s) == dictionaryOfStrings.end() )
                dictionaryOfStrings[s] = ch;
            
            if (dictionaryOfPatterns[ch] != s || dictionaryOfStrings[s] != ch )
                return false;
        }
        return true;
        
    }
};