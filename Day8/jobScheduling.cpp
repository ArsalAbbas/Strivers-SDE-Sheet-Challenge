#include <bits/stdc++.h>

bool comparator(vector<int> a, vector<int> b) {
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),comparator);
    int maxDead=jobs[0][0];
    for(auto it: jobs) maxDead=max(maxDead,it[0]);

    vector<int> slot(maxDead+1,0);
    
    int profit=0;

    for (auto it : jobs) {
    int dead=it[0];
    int prof=it[1];
    for (int j = dead; j > 0; j--) {
      if (!slot[j]) {
      slot[j]=1;
      profit+=prof;
      break;
      }
    }
    }
    return profit;
}
