vector<vector<int>> findTriplets(vector<int>arr, int n, int target) {
        vector<vector<int>> res; 
        sort(arr.begin(), arr.end()); 
        for (int i = 0; i < n-2; i++) {
            if (i == 0 || (i > 0 && arr[i] != arr[i-1])) { 
                int k = i+1;
				int j = n-1;
				int sum = target - arr[i];
                while (k < j) {
                    if (arr[k] + arr[j] == sum) {
                        res.push_back({arr[i],arr[k],arr[j]});
                        while (k < j && arr[k] == arr[k+1]) k++;
                        while (k < j && arr[j] == arr[j-1]) j--;
                        k++; j--;
                    } 
                    else if (arr[k] + arr[j] < sum) k++;
                    else j--;
               }
            }
        }
        return res;
    }
