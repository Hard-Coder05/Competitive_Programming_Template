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
	ll n;
	cin >> n;
	int arr[2 * n - 1];
	int count = 0;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		cin >> arr[i];
		if (arr[i] < 0)
			count++;
	}
	sort(arr, arr + 2 * n - 1);
	ll sum = 0;
	for (int i = 0; i < count - (count % n); i++)
	{
		sum += abs(arr[i]);
	}
	for (int i = count - (count % n); i < count; i++)
	{
		sum += arr[i];
	}
	for (int i = count; i < 2 * n - 1; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
}
