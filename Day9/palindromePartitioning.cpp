#include <bits/stdc++.h> 
bool isPalindrome(string s, int i, int j) {
  while (i <= j)
      if(s[i++]!=s[j--]) return false;
  return true;
}
void solve(string s, vector<string> &output, vector<vector<string>> &ans, int ind){
  if (ind == s.size()) {
      ans.push_back(output);
      return;
  }
  for (int i = ind; i < s.length(); i++) {
    if (isPalindrome(s, ind, i)) {
        output.push_back(s.substr(ind,i-ind+1));
        solve(s,output,ans,i+1);
        output.pop_back();
    }
  }
}
vector<vector<string>> partition(string &s) 
{
   vector<vector<string>> ans;
   vector<string> output;

   solve(s, output, ans, 0);
   return ans;
}
