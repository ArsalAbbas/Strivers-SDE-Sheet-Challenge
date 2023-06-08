#include <bits/stdc++.h> 
    void merge(int start,int end,int mid,long long *nums,int &count){

        int start1=start, start2=mid+1, k=0;
        vector<int> res(end-start+1,0);

        while(start1<=mid && start2<=end)
          if (nums[start1] > nums[start2]) {
            count+=(mid-start1+1);
            res[k++]=nums[start2++];
          } else {
              res[k++]=nums[start1++];
          }
        while(start2<=end) res[k++]=nums[start2++];
        while(start1<=mid) res[k++]=nums[start1++];

        for(int i=0; i<res.size(); i++) nums[start++]=res[i];

    }
    void MergeSort(int start,int end, long long *nums,int &count){

        if(start>=end) return;

        int mid=start+(end-start)/2;

        MergeSort(start,mid, nums,count );
        MergeSort(mid+1,end, nums,count);
        merge(start,end,mid,nums,count);

    }
long long getInversions(long long *nums, int n){
        int count=0;
        MergeSort(0,n-1,nums,count);
        return count;
}
