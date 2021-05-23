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
#define max(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
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
		vector<ll> arr;
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		ll diff[n - 1];
		diff[0] = arr[1] - arr[0];
		for (ll i = 1; i < n - 1; i++)
			diff[i] = min(diff[i - 1], arr[i + 1] - arr[i]);
		ll i = 0;
		for (ll i = 0; i < n; i++)
			if (arr[i] > diff[i])
				break;
		cout << i << endl;
	}
}
