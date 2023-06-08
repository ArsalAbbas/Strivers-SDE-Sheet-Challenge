#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int elem=arr[0];
	int count=0;
        for (int i=0; i<n; i++){
        if(arr[i]==elem) count++;
		else count--;
        if (count < 0) {
        	elem = arr[i];
			count=0;
			}
        }
		count=0;
        for (int i = 0; i < n; i++) {
			if(arr[i]==elem) count++;
		}
		if(count> n/2) return elem;
        return -1;
}
