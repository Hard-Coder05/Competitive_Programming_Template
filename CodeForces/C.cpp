/*
Problem Link: https://codeforces.com/contest/978/problem/C
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <iterator>
#include <string>
#include <bits/stdc++.h>
#define endl "\n"
#define ull unsigned long long
#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, m;
	cin >> n >> m;
	ll a[n];
	cin >> a[0];
	for (ll i = 1; i < n; i++) {
		ll x;
		cin >> x;
		a[i] = a[i - 1] + x;
	}
	for (ll i = 0; i < m; i++) {
		ll x;
		cin >> x;
		ll j = 0;
		for (; j < n; j++) {
			if (a[j] >= x)
				break;
		}
		cout << j + 1 << " ";
		if (j == 0)
			cout << x << endl;
		else
			cout << x - a[j - 1] << endl;
	}
}