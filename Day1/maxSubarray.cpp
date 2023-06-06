#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long res=0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
        if(sum> res) res=sum;
        if (sum < 0) {
            sum=0;
        }
    }
    return res;
}
