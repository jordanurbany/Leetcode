
// Given a string s, find the length of the longest substring without repeating characters.
//  the time complexity is O(n)
// the reason we dont use pointers here is because
// the indices of a string and not memory adresses
// this algorithm is using the sliding window approach with two pointers
/*this algorithm is particularly efficient for this problem because:
--It allows us to process the string in a single pass (O(n) time complexity).
--We don't need to check all possible substrings explicitly.
--The use of a hash set allows for O(1) lookup times when checking for character uniqueness*/
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int left = 0;

        for (int right = 0; right < n; right++)
        {
            // the 'count' function for unordered set checks
            // if the value is either 1 or 0 (if its in the set)
            if (charSet.count(s[right]) == 0)
            {
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            }
            else
            {
                while (charSet.count(s[right]))
                {
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }

        return maxLength;
    }
};
