/*
 * [58] Length of Last Word
 *
 * https://leetcode.com/problems/length-of-last-word
 *
 * Easy (31.31%)
 * Total Accepted:    132110
 * Total Submissions: 421930
 * Testcase Example:  '""'
 *
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 * 
 * If the last word does not exist, return 0.
 * 
 * Note: A word is defined as a character sequence consists of non-space
 * characters only.
 * 
 * 
 * For example, 
 * Given s = "Hello World",
 * return 5.
 * 
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') --i;
        if (i < 0) return 0;

        int j = i;
        while (i >= 0 && s[i] != ' ') --i;
        return j-i;
    }
};
