#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	int res=1;
  for (int i = 1; i <= n-1; i++) res=res*(m-1+i)/i;
	return res;
}
