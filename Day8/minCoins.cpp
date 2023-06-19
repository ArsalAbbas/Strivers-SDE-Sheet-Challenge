#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> denom={1,2,5,10,20,50,100,500,1000};

    int count=0;
    for (int i = 8; i >= 0; i--) {
        if(amount/denom[i]){
        count=count+amount/denom[i];
        amount=amount%denom[i];
        }
    }
    return count;
}
