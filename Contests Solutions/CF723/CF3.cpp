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
	ll n;
	cin >> n;
	multiset<ll> ms;
	ll sum = 0;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		if (sum + x >= 0)
		{
			ms.insert(x);
			sum += x;
		}
		else
		{
			ll bigneg = *(ms.begin());
			if (bigneg <= x)
			{
				ms.erase(ms.begin());
				sum -= bigneg;
				sum += x;
				ms.insert(x);
			}
		}
	}
	cout << ms.size() << endl;
}
