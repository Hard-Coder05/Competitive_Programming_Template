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
	ll tc;
	cin >> tc;
	while (tc--)
	{
		ll n, m;
		cin >> n >> m;
		ll count = n - 1;
		if (n > m)
		{
			for (ll i = n; i > m; i--)
				count += (i - 2);
			n = m;
		}
		map<ll, ll> mp;
		mp[m - (m % n)]++;
		for (ll i = n - 1; i > 1; i--)
		{
			for (auto &a : mp)
			{
				if (a.FF % i == 0)
					count += a.SS;
			}
			mp[m - (m % i)]++;
		}
		cout << count << endl;
	}
}
