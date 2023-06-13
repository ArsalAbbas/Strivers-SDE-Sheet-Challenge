#include<bits/stdc++.h>
// Time: O(nlogn)  Space: O(1) ~ Naive
// int removeDuplicates(vector<int> &arr, int n) {
// 	sort(arr.begin(),arr.end());
// 	int res=n;
//         for (int i = 0; i < n-1; i++)if(arr[i]==arr[i+1]) res--;
// 	return res;
// }
int removeDuplicates(vector<int> &arr, int n) {
	int res=0;
        for (int i = 0; i < n; i++) {
        if(arr[i]!=arr[res])
		res++;
		arr[res]=arr[i];
		}
	return res+1;
}
