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
	string s;
	cin >> s;
	string a = s;
	sort(a.begin(), a.end());
	int n = s.length();
	if (a[0] != 'a')
	{
		cout << "NO" << endl;
		return;
	}
	bool answerCan = true;
	for (int i = 0; i < n - 1; i++)
		if (a[i + 1] - a[i] != 1)
		{
			answerCan = false;
			break;
		}
	if (!answerCan)
	{
		cout << "NO" << endl;
		return;
	}
	int i = 0;
	for (; i < n; i++)
		if (s[i] == 'a')
			break;
	for (int j = i - 1; j >= 0; j--)
		if (s[j] - s[j + 1] < 0)
		{
			answerCan = false;
			break;
		}
	if (!answerCan)
	{
		cout << "NO" << endl;
		return;
	}
	for (int j = i + 1; j < n - 1; j++)
		if (s[j + 1] - s[j] < 0)
		{
			answerCan = false;
			break;
		}
	if (!answerCan)
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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
