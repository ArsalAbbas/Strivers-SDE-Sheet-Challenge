#include <bits/stdc++.h> 
void permute(int ind, vector<string> &res, int n, string s) {
    if (ind == n) {
        res.push_back(s);
        return;
    }
    for (int i = ind; i < n; i++) {
        swap(s[i], s[ind]);
        permute(ind + 1, res, n, s);
        swap(s[i], s[ind]);
    }
}

vector<string> findPermutations(string &str) {
    int n=str.length();
    vector<string> res;
    permute(0, res, n, str);
    return res;
}
