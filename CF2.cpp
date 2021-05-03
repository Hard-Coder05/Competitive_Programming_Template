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
bool isPerfectSquare(long double x)
{
	if (x >= 0)
	{
		long long sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
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
		long double n;
		cin >> n;
		if (isPerfectSquare(n / 2) || isPerfectSquare(n / 4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
