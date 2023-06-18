int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);

    int i=1;
    int j=0;
    int count=1;
    int res=1;
    while (i < n && j < n) {
      if (at[i] <= dt[j]) {
            count++;
            i++;
      } else {
        count--;
        j++;
      }
      res=max(res,count);
    }
    return res;
}
