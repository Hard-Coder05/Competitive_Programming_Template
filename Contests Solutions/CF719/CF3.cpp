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
		int n;
		cin >> n;
		if (n == 2)
		{
			cout << -1 << endl;
			continue;
		}
		int arr[n][n];
		int x = 1;
		int i = 0;
		int j = 0;
		for (; i < n; i++)
		{
			for (; j < n, x <= n * n; j++, x += 2)
			{
				arr[i][j] = x;
			}
			if (x > n * n)
				break;
			j = 0;
		}
		x = 2;
		for (; i < n; i++)
		{
			for (; j < n, x <= n * n; j++, x += 2)
			{
				arr[i][j] = x;
			}
			j = 0;
		}
		i = 0;
		j = 0;
		for (; i < n; i++)
		{
			for (; j < n; j++)
			{
				cout << arr[i][j] << " ";
			}
			j = 0;
			cout << endl;
		}
	}
}
