/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
#define endl "\n"
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define MOD 1000000007
#define INF 1000000000000000003
#define FIO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
using namespace std;
typedef long long ll;
ll countPairs(ll arr[], ll n)
{
	unordered_map<ll, ll> map;
	for (ll i = 0; i < n; i++)
		map[arr[i] - i]++;
	ll res = 0;
	for (auto x : map)
	{
		ll cnt = x.second;
		res += ((cnt * (cnt - 1)) / 2);
	}
	return res;
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
		ll n;
		cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		cout << countPairs(arr, n) << endl;
	}
}
