#include <bits/stdc++.h>
using namespace std;
struct activities{
    int start;
    int end;
};
bool comparator(activities a, activities b){

    return a.end<b.end?true:a.end==b.end?a.start>b.start:false;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {

    int n=start.size();
    activities arr[n];
    for(int i=0; i<n; i++){
        arr[i].start=start[i];
        arr[i].end=finish[i];
    }
    sort(arr,arr+n, comparator);
    
    int maxi=1;
    int limit=arr[0].end;

        for(int i=1; i<n; i++){
          if (arr[i].start >= limit) {
            limit = arr[i].end;
            maxi++;
          }
        }
    return maxi;

}
