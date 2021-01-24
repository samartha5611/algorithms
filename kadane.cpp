#include "bits/stdc++.h"
using namespace std;

int maxSum(vector<int> &a , int n)
{
	int sum  = 0;
	int ans = INT_MIN;

	for (auto &x : a)
	{
		sum += x;
		ans = max(ans , sum);
		if (sum < 0)sum = 0;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//freopen("out.txt","w",stdout);
#endif

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0 ; i < n ; i++)
		cin >> a[i];


	cout << maxSum(a , n) << endl;
	return 0 ;
}
