#include <bits/stdc++.h>

    void solve(int ind,vector<int> &input,vector<int> &output, int target, vector<vector<int>> &ans){
            if(target==0){
                ans.push_back(output);
                return;
            }

        for(int i=ind; i<input.size(); i++){
            if(i>ind && input[i]==input[i-1]) continue;
            if(input[i]>target) break;
        output.push_back(input[i]);
        solve(i+1,input,output,target-input[i],ans);
        output.pop_back();
       }  
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates,int n, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> output;
        solve(0,candidates,output,target,ans);
        return ans;
    }
