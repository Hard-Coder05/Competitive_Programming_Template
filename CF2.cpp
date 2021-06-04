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
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
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
		vector<ll> odds;
		ll eves = 0;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			if (!(x & 1))
				eves++;
			else
				odds.PB(x);
		}
		ll ans = 0;
		ll curr = n - 1;
		while (eves--)
		{
			ans += curr;
			curr--;
		}
		ll oddSize = odds.size();
		if (oddSize <= 1)
		{
			cout << ans << endl;
			continue;
		}
		for (int i = 0; i < oddSize - 1; i++)
			for (int j = i + 1; j < oddSize; j++)
				ans += (gcd(odds[i], odds[j]) > 1) ? 1 : 0;
		cout << ans << endl;
	}
}
