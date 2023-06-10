#include <bits/stdc++.h> 
int uniqueSubstrings(string& input) {
    int n = input.length();
    unordered_map<char, int> mp;
    int i = 0;
    int j = 0;
    int longest = 0;

    while (j < n) {
        if (mp.find(input[j]) == mp.end() || mp[input[j]] < i) {
            mp[input[j]] = j;
            longest =max(longest, j - i + 1);
            j++;
        } else {
          i = mp[input[j]] + 1;
          mp[input[j]] = j;
          j++;
        }
    }

    return longest;
}
