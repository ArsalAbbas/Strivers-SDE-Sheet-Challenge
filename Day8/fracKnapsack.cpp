#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> &a, pair<int,int> &b) {
    double r1=a.second*1.0/a.first;
    double r2=b.second*1.0/b.first;
    return r1>r2; 
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(),items.end(),comparator);
    double maxi=0;
    int i=0;
    int totalWeight=0;
    while (totalWeight+items[i].first<w) {
        maxi=maxi+items[i].second;
        totalWeight+=items[i].first;
        i++;
        if(i>=n)
        break;
    }
    if(i<n)
        maxi=maxi+(w-totalWeight)*(items[i].second*1.0/items[i].first);
    return maxi;
}
