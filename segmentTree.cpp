#include "bits/stdc++.h"
using namespace std;

const int N = 10e5;

int seg[4 * N];
int a[N];

int build(int ind , int l , int r)
{
	if (l == r)
	{
		seg[ind] = a[l];
		return 0;
	}
	int mid = (l + r) / 2;
	build(2 * ind + 1 , l , mid);
	build(2 * ind + 2 , mid + 1 , r);
	seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]);
	return 0;

}

int qry(int ind , int low , int high , int l , int r)
{
	if (l  <= low and r >= high)
		return seg[ind];

	if ( high < l or low > r)
		return 0;

	int mid = (low + high) / 2;
	int left = qry(2 * ind + 1 , low , mid , l , r);
	int right = qry(2 * ind + 2 , mid + 1 , high , l , r);
	return left + right;
}

int pupdate(int ind , int low , int high , int node , int x)
{
	if (low == high)
	{
		seg[ind] += x;
		return 0;
	}
	else
	{
		int mid = (low + high) >> 1;
		if (node <= mid and node >= low)
			pupdate(2 * ind + 1 , low , mid , node , val);
		else
			pudate(2 * ind + 2 , mid + 1 , high , node , val);
		seg[ind] = seg[2 * ind + 1] + seg[ind * 2 + 2];
	}
	return 0;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//freopen("out.txt","w",stdout);
#endif
	int n;
	cin >> n;

	for (int i = 0 ; i < n ; i++)
		cin >> a[i];
	build(0 , 0 , n - 1);

	int m;
	cin >> m;
	while (m--)
	{
		int l , r;
		cin >> l >> r;
		--l; --r;
		cout << qry(0 , 0 , n - 1 , l , r) << endl;

	}



	return 0 ;
}
