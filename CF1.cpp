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
		ll n, x;
		cin >> n >> x;
		ll arr[n];
		ll sum = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum == x)
			cout << "NO" << endl;
		else
		{
			cout << "YES" << endl;
			ll currsum = 0;
			for (ll i = 0; i < n; i++)
			{
				currsum += arr[i];
				if (currsum == x)
				{
					cout << arr[i + 1] << " " << arr[i] << " ";
					i++;
				}
				else
				{
					cout << arr[i] << " ";
				}
			}
			cout << endl;
		}
	}
}
