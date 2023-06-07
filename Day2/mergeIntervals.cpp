#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    res.push_back(intervals[0]);

    for (auto it : intervals) {
        int start=it[0];
        int end=it[1];
        int lastStart=res.back()[0];
        int lastEnd=res.back()[1];
        //Case 1: 1 6   2 5
        //Case 2: 1 6   5 8
        //Case 3: 1 6   8 9
        if(end<=lastEnd) continue;
        if (start <= lastEnd) {
            res.back()[1]=end;
            continue;
        }
        else
        res.push_back({start,end});
    }
  return res;
}
