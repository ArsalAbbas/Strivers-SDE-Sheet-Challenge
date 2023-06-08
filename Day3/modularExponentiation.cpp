#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    int res=1;
    while (n>0) {
        if(n%2){
            res=(1LL*res*x)%m;
        }
        x=(1LL*x*x)%m;
        n/=2;
    }
    return res;
}
