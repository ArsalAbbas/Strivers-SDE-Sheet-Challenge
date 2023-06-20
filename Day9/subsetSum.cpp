#include <bits/stdc++.h> 
void solve(vector<int> &ans, vector<int> input, int sum,int i){
    if(input.size()==i){
        ans.push_back(sum);
        return;
    }
    
    solve(ans,input,sum,i+1);
    solve(ans,input,sum+input[i],i+1);
    
    return;
    
    
}
    vector<int> subsetSum(vector<int> &arr)
    {
        vector<int> ans;
        solve(ans,arr,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
