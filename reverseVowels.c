/*
    Write a function that takes a string as input and reverse only the vowels of a string.

    Example 1:
    Given s = "hello", return "holle".

    Example 2:
    Given s = "leetcode", return "leotcede".
    
*/


bool isCharVowel (char current)
{
    return (    
                current == 'a' || current == 'e' || current == 'i' || current == 'o' ||
                current == 'u' || current == 'A' || current == 'E' || current == 'I' || 
                current == 'O' || current == 'U'
            
            );
}

char* reverseVowels(char* s) 
{
    int left = 0;
    int right = strlen (s) - 1;
    
    while (left < right)
    {
        if(isCharVowel (s[left]) && isCharVowel (s[right]))
        {
            char *t = s[left];
            s[left] = s[right];
            s[right] = t;
            left++;
            right--;
        }
        else if(isCharVowel (s[left]))
            --right;
        else
            ++left;
    }
    return s;
}