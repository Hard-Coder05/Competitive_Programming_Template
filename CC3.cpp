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
		ll n, m;
		cin >> n >> m;
		ll count = n - 1;
		map<ll, vector<ll>> mp;
		for (ll i = 2; i <= n; i++)
		{
			mp[m % i].PB(i);
		}
		for (auto &i : mp)
		{
			for (auto &a : i.SS)
			{
				for (auto &currem : mp)
				{
					if (currem.FF % a == i.FF)
					{
						ll currcount = 0;
						for (auto &curb : currem.SS)
						{
							if (curb <= a)
								currcount++;
							else
								break;
						}
						count += (currem.SS.size() - currcount);
					}
				}
			}
		}
		cout << count << endl;
	}
}
