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
	string s;
	cin >> s;
	ll n = s.size();
	ll tc;
	cin >> tc;
	ll arr[n + 1] = {0};
	while (tc--)
	{
		ll x;
		cin >> x;
		x--;
		arr[x] += 1;
		arr[n - x] -= 1;
	}
	for (ll i = 1; i <= n; i++)
	{
		arr[i] += arr[i - 1];
	}
	string ans = "";
	for (ll i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			ans += s[i];
		else
			ans += s[n - i - 1];
	}
	cout << ans << endl;
}
