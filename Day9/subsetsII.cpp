#include <bits/stdc++.h>
    void solve(vector<vector<int>> &ans, vector<int> input, vector<int> output){
        if(input.size()==0){
            sort(output.begin(),output.end());
            ans.push_back(output);
            return;
        }

        vector<int> output1=output, output2=output;
        
        output2.push_back(input[0]);
        input.erase(input.begin()+0);

        solve(ans,input,output1);
        solve(ans,input,output2);
        
        return;
    }

    vector<vector<int>> uniqueSubsets(int n,vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(ans,nums,output);
        set<vector<int>> s;
        for(auto it: ans){
            s.insert(it);
        }
        ans.assign(s.begin(),s.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
