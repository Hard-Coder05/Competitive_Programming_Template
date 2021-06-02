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
stack<ll> ans;
ll kadane(ll arr[], ll n)
{
	ll max_so_far = 0;
	ll max_ending_here = 0;
	for (ll i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + arr[i];
		max_ending_here = max(max_ending_here, 0LL);
		max_so_far = max(max_so_far, max_ending_here);
	}
	return max_so_far;
}
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
		ll n, k;
		cin >> n >> k;
		ll A[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		if (k == 1)
		{
			ll neg = 0;
			for (int i = 0; i < n; i++)
			{
				if (A[i] < 0)
					neg += 1;
			}
			if (neg == n)
			{
				sort(A, A + n);
				cout << A[n - 1] << "\n";
				continue;
			}
			ll sol = kadane(A, n);

			cout << sol << "\n";
		}
	}
}
