#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int target) {
   unordered_map<int, int> freq;
   vector<vector<int>> pairs;
   for (int num : arr) {
      int complement = target - num;
      if (freq[complement] > 0) {
         for (int i = 0; i < freq[complement]; i++) {
            int first=min(complement,num);
            int second=max(complement,num);
            pairs.push_back({first,second});
         }
      }
      freq[num]++;
   }
   sort(pairs.begin(),pairs.end());
   return pairs;
}
