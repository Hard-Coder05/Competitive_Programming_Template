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
		int ten = 0;
		ll i = 10;
		ll curr = 1;
		for (; i <= 1000000000; i *= 10)
		{
			if (n > i)
			{
				ten++;
				curr *= 10;
				curr++;
			}
		}
		int count = 0;
		int a = curr;
		for (int x = 0; x < 9; x++)
		{
			if (curr <= n)
			{
				count++;
				curr += a;
			}
			else
				break;
		}
		cout << (ten * 9) + count << endl;
	}
}
