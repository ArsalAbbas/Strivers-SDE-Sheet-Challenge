#include<bits/stdc++.h>
using namespace std;
//Find all permutations
// void permute(int ind, vector<string> &res, int n, string s) {
//     if (ind == n) {
//         res.push_back(s);
//         return;
//     }
//     for (int i = ind; i < n; i++) {
//         swap(s[i], s[ind]);
//         permute(ind + 1, res, n, s);
//         swap(s[i], s[ind]);
//     }
// }

// string kthPermutation(int n, int k) {
//     string str = "";
//     vector<string> res;
//     for (int i = 1; i <= n; i++) {
//         str += to_string(i);
//     }
//     permute(0, res, n, str);
//     sort(res.begin(),res.end());
//     return res[k - 1];
// }
// Optimal code for Kth Permutation
string kthPermutation(int n, int k) {
    string result;
    vector<int> nums;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        nums.push_back(i);
    }
    k--;
    for (int i = 0; i < n; i++) {
        fact /= (n - i);
        int index = k / fact;
        result += to_string(nums[index]);
        nums.erase(nums.begin() + index);
        k %= fact;
    }
    return result;
}

