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
		ll arr[n];
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		ll a = arr[0] ^ arr[1] ^ arr[2];
		bool repeated = false;
		if (a == arr[0] && a == arr[1] && a == arr[2])
			repeated = true;
		if (repeated)
		{
			for (ll i = 0; i < n; i++)
			{
				if (arr[i] != a)
					cout << i + 1 << endl;
			}
		}
		else
		{
			for (ll i = 0; i < 3; i++)
			{
				if (arr[i] == a)
					cout << i + 1 << endl;
			}
		}
	}
}
