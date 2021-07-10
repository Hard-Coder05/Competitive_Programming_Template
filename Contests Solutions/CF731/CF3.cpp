/* 
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
#define ll long long
#define int long long
#define vi vector<int>
#define pii pair<int, int>
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
//////////////////////////////////////////////////////////////////////////////
int power(int a, int b)
{
	int res = 1ll;
	while (b > 0)
	{
		if (b % 2ll)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b /= 2ll;
	}
	return res;
}
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}
int fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = (res * i) % MOD;
	}
	return res % MOD;
}
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}
//////////////////////////////////////////////////////////////////////////////

void solve()
{
	int k, n, m;
	cin >> k >> n >> m;
	vi a(n), b(m);
	for (int &i : a)
		cin >> i;
	for (int &i : b)
		cin >> i;
	vi ans;
	int i = 0, j = 0;
	while (i < n || j < m)
	{
		bool over = false;
		while (i < n && a[i] == 0)
		{
			ans.PB(0);
			k++;
			i++;
			over = true;
		}
		while (j < m && b[j] == 0)
		{
			ans.PB(0);
			j++;
			k++;
			over = true;
		}
		while (i < n && a[i] != 0 && a[i] <= k)
		{
			ans.PB(a[i]);
			i++;
			over = true;
		}
		while (j < m && b[j] != 0 && b[j] <= k)
		{
			ans.PB(b[j]);
			j++;
			over = true;
		}
		if (!over)
		{
			cout << -1 << endl;
			return;
		}
	}
	for (int &i : ans)
		cout << i << " ";
	cout << endl;
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while (tc--)
	{
		solve();
	}
}
