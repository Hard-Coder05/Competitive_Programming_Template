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
	if (n == 0 || n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
//////////////////////////////////////////////////////////////////////////////
bool comparator(pii one, pii two)
{
	return one.SS < two.SS;
}
void solve()
{
	int n;
	cin >> n;
	vector<pii> arr(n);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].FF >> arr[i].SS;
		ans += 2 * arr[i].FF;
	}
	sort(arr.begin(), arr.end(), comparator);
	reverse(arr.begin(), arr.end());
	int i = 0, j = n - 1, curr = 0;
	while (i <= j)
	{
		int now = arr[j].SS;
		if (i == j)
		{
			int y = arr[i].FF;
			int x = max(0ll, arr[i].SS - curr);
			y = max(0ll, y - x);
			ans -= y;
			break;
		}
		else if (curr >= now)
		{
			curr += arr[j].FF;
			ans -= arr[j].FF;
			j--;
		}
		else if (curr + arr[i].FF <= arr[j].SS)
		{
			curr += arr[i].FF;
			arr[i].FF = 0;
			i++;
		}
		else
		{
			int x = arr[j].SS - curr;
			curr += x;
			curr += arr[j].FF;
			arr[i].FF -= x;
			ans -= arr[j].FF;
			j--;
		}
	}
	cout << ans << endl;
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
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		solve();
	}
}
