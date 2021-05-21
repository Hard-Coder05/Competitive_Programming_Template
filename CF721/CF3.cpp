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
bool palindrome(string s, ll n)
{
	for (ll i = 0; i < n / 2; i++)
	{
		if (s[i] != s[n - i - 1])
			return false;
	}
	return true;
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
		string s;
		cin >> s;

		ll arr[n];

		ll zero = 0;
		for (ll i = 0; i < n; i++)
			if (s[i] == '0')
				zero++;

		if (palindrome(s, n))
		{
			if ((zero & 1) && zero > 1)
				cout << "ALICE" << endl;
			else
				cout << "BOB" << endl;
		}
		else
		{
			if (zero == 2 && (n & 1) && s[n / 2] == '0')
				cout << "DRAW" << endl;
			else
				cout << "ALICE" << endl;
		}
	}
}
