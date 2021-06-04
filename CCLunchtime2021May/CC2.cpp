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
	ll tc;
	cin >> tc;
	while (tc--)
	{
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll q[k];
		for (int i = 0; i < k; i++)
		{
			cin >> q[i];
		}
		ll cur = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] != s[i + 1])
			{
				cur += 1;
			}
			else
			{
				cur += 2;
			}
		}
		for (int i = 0; i < k; i++)
		{
			ll par = q[i];
			par--;
			if (par == 0)
			{
				if (s[par] == '0')
				{
					if (par + 1 < n and s[par + 1] == '1')
					{
						cur -= 1;
						cur += 2;
					}
					else if (par + 1 < n and s[par + 1] == '0')
					{
						cur -= 2;
						cur += 1;
					}
					s[par] = '1';
				}
				else
				{
					if (par + 1 < n and s[par + 1] == '1')
					{
						cur -= 2;
						cur += 1;
					}
					else if (par + 1 < n and s[par + 1] == '0')
					{
						cur -= 1;
						cur += 2;
					}
					s[par] = '0';
				}
			}
			else if (par == n - 1)
			{
				if (s[par] == '0')
				{
					if (par - 1 >= 0 and s[par - 1] == '1')
					{
						cur -= 1;
						cur += 2;
					}
					else if (par - 1 >= 0 and s[par - 1] == '0')
					{
						cur -= 2;
						cur += 1;
					}
					s[par] = '1';
				}
				else
				{
					if (par - 1 >= 0 and s[par - 1] == '1')
					{
						cur -= 2;
						cur += 1;
					}
					else if (par - 1 >= 0 and s[par - 1] == '0')
					{
						cur -= 1;
						cur += 2;
					}
					s[par] = '0';
				}
			}
			else
			{
				if (s[par] == '0')
				{
					if (s[par - 1] == '0')
					{
						cur -= 2;
						cur += 1;
					}
					else
					{
						cur -= 1;
						cur += 2;
					}
					if (s[par + 1] == '0')
					{
						cur -= 2;
						cur += 1;
					}
					else
					{
						cur -= 1;
						cur += 2;
					}
					s[par] = '1';
				}
				else
				{
					if (s[par - 1] == '0')
					{
						cur -= 1;
						cur += 2;
					}
					else
					{
						cur -= 2;
						cur += 1;
					}
					if (s[par + 1] == '0')
					{
						cur -= 1;
						cur += 2;
					}
					else
					{
						cur -= 2;
						cur += 1;
					}
					s[par] = '0';
				}
			}
			cout << cur << "\n";
		}
	}
}
