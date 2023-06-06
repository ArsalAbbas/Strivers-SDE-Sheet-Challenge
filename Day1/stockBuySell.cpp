#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxi=0;
    int minPrice=INT_MAX;
    for (auto it : prices) {
        minPrice=min(it,minPrice);
        maxi=max(maxi,it-minPrice);
    }
    return maxi;
}
