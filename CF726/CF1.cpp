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
		ll sum = 0;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			sum += x;
		}
		if (sum == n)
			cout << 0 << endl;
		else if (sum < n)
			cout << 1 << endl;
		else
			cout << sum - n << endl;
	}
}
