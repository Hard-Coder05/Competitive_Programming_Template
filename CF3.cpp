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
		ll univ[n];
		ll skill[n];
		for (ll i = 0; i < n; i++)
			cin >> univ[i];
		for (ll i = 0; i < n; i++)
			cin >> skill[i];
		map<ll, vector<ll>> mp;
		for (ll i = 0; i < n; i++)
		{
			mp[univ[i] - 1].insert(skill[i]);
		}
		map<ll, vector<ll>>::iterator itr;
		for (itr = mp.begin(); itr != mp.end(); ++itr)
		{
			sort((itr->second).begin(), (itr->second).end(), greater<int>());
			auto i = (itr->second).begin();
			ll sum = *i;
			if (i != (itr->second).end())
				i++;
			for (; i != (itr->second).end(); i++)
			{
				sum += *i;
				*i = sum;
			}
		}
		for (ll k = 1; k <= n; k++)
		{
			for (itr = mp.begin(); itr != mp.end(); ++itr)
			{
			}
		}
	}
}
