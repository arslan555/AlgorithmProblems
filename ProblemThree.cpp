#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

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

