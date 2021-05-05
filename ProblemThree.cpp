#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
/*
Given a string S, find length of the longest substring with all distinct characters.
Example 1:
Input:
S = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest
substring with all distinct characters.
​Example 2:
Input:
S = "aaa"
Output: 3
Explanation: "a" is the longest substring
with all distinct characters.
Your Task: You don't need to read input or print anything. Your task is to complete the function
longestSubstrDitinctChars() which takes the string S as input and returns the length of the longest
substring with all distinct characters.

Expected Time Complexity: O(|S|).Expected Auxiliary Space: O(1).
Constraints:1<=|S|<=105
*/
int longestUniqueSubstring(string str)
{
    int n = str.size();
    int res = 0; // result
    vector<int> lastIndex(NO_OF_CHARS, -1);
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, lastIndex[str[j]] + 1);
        res = max(res, j - i + 1);
        lastIndex[str[j]] = j;
    }
    return res;
}

