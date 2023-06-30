bool isEven(int n){
return n%2==0;
} 
int singleNonDuplicate(vector<int>& arr)
{
	int start=0;
	int end=arr.size()-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]!= arr[mid-1] && arr[mid]!= arr[mid+1]) return arr[mid];
		else if(isEven(mid)){
			if(arr[mid]==arr[mid+1]) start=mid+1;
			else end=mid-1;
		}
		else if(!isEven(mid)){
			if(arr[mid]==arr[mid-1]) start=mid+1;
			else end=mid-1;
		}
	}
	return -1;
}
