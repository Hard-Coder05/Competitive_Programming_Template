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
		ll arr[n];
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		if (n == 2)
		{
			cout << min(arr[0], arr[1]) << " " << max(arr[0], arr[1]) << endl;
			continue;
		}
		sort(arr, arr + n, greater<ll>());
		ll min_diff = INT_MAX, a, a1, i1;
		for (ll i = 1; i < n; i++)
		{
			if (arr[i - 1] - arr[i] < min_diff)
			{
				min_diff = arr[i - 1] - arr[i];
				a = arr[i - 1];
				a1 = arr[i];
				i1 = i;
			}
			if (min_diff == 0)
				break;
		}
		ll index = i1 - 1;
		while (index >= 0)
		{
			cout << arr[index--] << " ";
		}
		while (n-- > i1)
		{
			cout << arr[n] << " ";
		}
		cout << endl;
	}
}
