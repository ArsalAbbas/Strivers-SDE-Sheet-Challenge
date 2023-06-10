#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int k)
{
    int n = a.size();
    int xr = 0;
    map<int, int> mp;
    mp[xr]++;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mp[x];
        mp[xr]++;
    }
    return cnt;
}
