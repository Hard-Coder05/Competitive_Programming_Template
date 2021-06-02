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
const ll MAX = 10000000;

ll prefix[MAX + 1];

void build()
{
	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= MAX; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}
	prefix[0] = prefix[1] = 0;
	for (ll p = 2; p <= MAX; p++)
	{
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}

ll query(ll L, ll R)
{
	return prefix[R] - prefix[L - 1];
}

int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	sieve();
	ll tc;
	cin >> tc;
	while (tc--)
	{
		ll n;
		cin >> n;
		if (n == 2)
		{
			cout << 1 << "\n";
			return;
		}
		if (n == 3)
		{
			cout << 2 << "\n";
			return;
		}
		ll sol = query(2, n);
		ll sol2 = query(2, n / 2);
		cout << sol - sol2 + 1 << "\n";
	}
}
