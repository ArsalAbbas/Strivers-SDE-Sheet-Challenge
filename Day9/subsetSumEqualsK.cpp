#include <bits/stdc++.h>

void solve(vector<vector<int>>& ans, vector<int>& input, vector<int>& output, int k, int index) {
    if (index == input.size()) {
        if (accumulate(output.begin(), output.end(), 0) == k) {
            ans.push_back(output);
        }
        return;
    }
    solve(ans, input, output, k, index + 1); 
    output.push_back(input[index]);
    solve(ans, input, output, k, index + 1); 
    output.pop_back(); 
}

vector<vector<int>> findSubsetsThatSumToK(vector<int>& nums,int n, int k) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(ans, nums, output, k, 0);
    return ans;
}
