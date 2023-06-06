#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &perm, int n)
{
    int bp=-1; 
    for (int i=n-2; i>=0;i--) {
        if (perm[i]<perm[i+1]) {
            bp=i;
            break;
        }
    }
    if (bp==-1) {
        reverse(perm.begin(), perm.end());
        return perm;
    }
    for (int i = n - 1; i > bp; i--) {
        if (perm[i]>perm[bp]) {
            swap(perm[i], perm[bp]);
            break;
        }
    }
    reverse(perm.begin()+bp+1,perm.end());
    return perm;
    }
