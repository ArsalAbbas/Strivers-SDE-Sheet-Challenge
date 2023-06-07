#include <bits/stdc++.h>
//Solution 1
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {

	int ap1=m-1;
	int ap2=0;
	while(ap1>=0 && ap2<n){
          if (arr1[ap1] > arr2[ap2]) {
                swap(arr1[ap1],arr2[ap2]);
        		ap1--;
				ap2++;
		  }
		  else break;
		}
	sort(arr1.begin(),arr1.begin()+m);
	sort(arr2.begin(),arr2.end());

	int x=0;
  	for (int i = m; i < m + n; i++) arr1[i]=arr2[x++];
	  return arr1;

}

//Solution 2
  int x=0;
  for (int i = m; i < m + n; i++) arr1[i]=arr2[x++];
  sort(arr1.begin(),arr1.end());
  return arr1;
