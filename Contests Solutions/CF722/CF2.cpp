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
		ll n;
		cin >> n;
		ll pos = 0;
		ll neg = 0;
		ll zero = 0;
		vector<ll> nums;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			if (x > 0)
				pos++;
			else if (x == 0)
				zero++;
			else
				neg++;
			nums.PB(x);
		}
		if (zero >= 2)
		{
			cout << neg + zero << endl;
			continue;
		}
		sort(nums.begin(), nums.end());
		ll mn = INF;
		for (int i = 0; i < n; i++)
			if (nums[i] > 0)
			{
				mn = min(mn, nums[i]);
				break;
			}
		bool ans = (mn < INF);
		for (ll i = 1; i < n; i++)
		{
			if (!ans)
				break;
			if (nums[i] <= 0)
				ans &= (abs(nums[i] - nums[i - 1]) >= mn);
			else
				break;
		}
		if (ans)
			cout << zero + neg + 1 << endl;
		else
			cout << zero + neg << endl;
	}
}
