/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define INF INT_MAX
#define vi vector<int>
#define pii pair<int, int>
#define ll long long
#define ld long double
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define max(a, b) (             \
	{                           \
		__typeof__(a) _a = (a); \
		__typeof__(b) _b = (b); \
		_a > _b ? _a : _b;      \
	})
#define min(a, b) (             \
	{                           \
		__typeof__(a) _a = (a); \
		__typeof__(b) _b = (b); \
		_a < _b ? _a : _b;      \
	})
#define FIO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll tc;
	cin >> tc;
	while (tc--)
	{
		ll n;
		cin >> n;
		ll arr[n];
		ll maxE = INT_MIN;
		ll minE = INT_MAX;
		ll maxIn;
		ll minIn;
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (maxE < arr[i])
			{
				maxE = arr[i];
				maxIn = i + 1;
			}
			if (minE > arr[i])
			{
				minE = arr[i];
				minIn = i + 1;
			}
		}
		ll ans[4];
		ans[0] = max(minIn, maxIn);
		ans[1] = max(n + 1 - minIn, n + 1 - maxIn);
		if (n + 1 - minIn + maxIn > n)
			ans[3] = max(n + 1 - minIn, maxIn);
		else
			ans[3] = n + 1 - minIn + maxIn;
		if (n + 1 - maxIn + minIn > n)
			ans[2] = max(n + 1 - maxIn, minIn);
		else
			ans[2] = n + 1 - maxIn + minIn;
		sort(ans, ans + 4);
		cout << ans[0] << endl;
	}
}
