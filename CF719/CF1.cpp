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
		int n;
		cin >> n;
		string s;
		cin >> s;
		char prev = s[0];
		bool repeated = false;
		for (int i = 1; i < n; i++)
		{
			if (prev == s[i])
				continue;
			else
			{
				for (int j = i; j < n; j++)
				{
					if (prev == s[j])
					{
						repeated = true;
						break;
					}
				}
			}
			if (repeated)
				break;
			else
				prev = s[i];
		}
		if (repeated)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}