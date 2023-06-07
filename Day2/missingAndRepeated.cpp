#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int i=0;
	while(i<n)
	{
	if(arr[i]!=arr[arr[i]-1])
		swap(arr[i],arr[arr[i]-1]);
	else
		i++;
	}
	int missing;
	int repeated;
	for(int i=0;i<n;i++){
		if(arr[i]!=i+1){
			missing=(i+1);
			repeated=(arr[i]);
			}
	}
	return {missing,repeated};
}
