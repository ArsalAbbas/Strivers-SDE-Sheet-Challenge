#include <bits/stdc++.h> 
    void merge(int start,int end,int mid,vector<int> &nums){

        int start1=start, start2=mid+1, k=0;
        vector<int> res(end-start+1,0);

        while (start1 <= mid && start2 <= end) {
          if (nums[start1] > nums[start2])
            res[k++]=nums[start2++];
           else
              res[k++]=nums[start1++];
		}
        while(start2<=end) res[k++]=nums[start2++];
        while(start1<=mid) res[k++]=nums[start1++];

        for(int i=0; i<res.size(); i++) nums[start++]=res[i];

    }
    void countPairs(int start, int end, int mid, vector<int> &nums,
                    int &count) {
	int start1=start;
	int start2=mid+1;
	int end1=mid;
	int end2=end;
      for (int i = start1; i <=end1; i++) {
		  while(start2<=end2 && nums[i]>2*nums[start2]) start2++;
		  count+=(start2-(mid+1));
	  }
}
    void MergeSort(int start,int end, vector<int> &nums,int &count){

        if(start>=end) return;

        int mid=start+(end-start)/2;
        MergeSort(start,mid, nums,count );
        MergeSort(mid+1,end, nums,count);
		countPairs(start,end,mid,nums,count);
        merge(start,end,mid,nums);

    }
int reversePairs(vector<int> &nums, int n){	
	    int count=0;
        MergeSort(0,n-1,nums,count);
        return count;
}
