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
	ll n, x, k;
	cin >> n >> x >> k;
	ll ini[n];
	ll rate[n];
	for (ll i = 0; i < n; i++)
		cin >> ini[i];
	for (ll i = 0; i < n; i++)
		cin >> rate[i];
	ll minday[n];
	for (ll i = 0; i < n; i++)
		minday[i] = ceil((k - ini[i]) / rate[i]);
}
