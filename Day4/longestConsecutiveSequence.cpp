#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> s(arr.begin(),arr.end());
    int longest=0;
    for (int num : s) {
      if (!s.count(num - 1)) {
      int currNum=num;
      int streak=1;
      while (s.count(currNum + 1)) {
      streak++;
      currNum++;
      s.erase(currNum);
        }
      longest=max(streak,longest);
      }
    }
    return longest;
}
