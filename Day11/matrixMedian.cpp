#include <bits/stdc++.h>
using namespace std;

int countLessEqual(vector<int>& row, int target) {
    int l = 0, h = row.size() - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (row[mid] <= target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return l;
}

int getMedian(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int start = 0, end=1e9;
    while (start < end) {
        int mid = start + (end - start) / 2;
        int count = 0;
        for (int i = 0; i < n; i++) count += countLessEqual(matrix[i], mid);
        if (count <= (n * m) / 2)
            start = mid + 1;
        else
            end = mid;
    }

    return start;
}
