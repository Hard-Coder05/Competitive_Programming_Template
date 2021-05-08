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
		ll x;
		cin >> x;
		char arr[x][x];
		ll x1 = -1, x2 = -1, y1 = -1, y2 = -1;
		for (ll i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cin >> arr[i][j];
				if (arr[i][j] == '*')
				{
					if (x1 == -1)
					{
						x1 = i;
						y1 = j;
					}
					else
					{
						x2 = i;
						y2 = j;
					}
				}
			}
		}
		if (x1 == x2)
		{
			if (x1 - 1 >= 0)
			{
				arr[x1 - 1][y1] = '*';
				arr[x1 - 1][y2] = '*';
			}
			else
			{
				arr[x1 + 1][y1] = '*';
				arr[x1 + 1][y2] = '*';
			}
		}
		else
		{
			if (y1 == y2)
			{
				if (y1 - 1 >= 0)
				{
					arr[x1][y1 - 1] = '*';
					arr[x2][y1 - 1] = '*';
				}
				else
				{
					arr[x1][y1 + 1] = '*';
					arr[x2][y1 + 1] = '*';
				}
			}
			else
			{
				arr[x1][y2] = '*';
				arr[x2][y1] = '*';
			}
		}
		for (ll i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}
