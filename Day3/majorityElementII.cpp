#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int count1=0;
    int count2=0;
    int elem1;
    int elem2;

    for (int val: arr) {
      if (count1 == 0 && elem2 != val) {
          count1=1;
          elem1=val;
      }
    else if (count2 == 0 && elem1 != val) {
          count2=1;
          elem2=val;
      }
    else if(val==elem1) count1++;
    else if(val==elem2) count2++;
    else {
    count1--;
    count2--;
        }
    }
    count1=0;
    count2=0;
    for (int val : arr) {
    if(val==elem1) count1++;
    else if(val==elem2) count2++;
    }
    vector<int> res;
    if(count1 > n/3)
        res.push_back(elem1);
    if(count2> n/3) 
        res.push_back(elem2);
    return res;
}
