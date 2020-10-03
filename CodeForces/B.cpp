/*
Problem Link: https://codeforces.com/contest/978/problem/B
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
	ll n; string s;
	cin >> n >> s;
	ll ans = 0;
	int consx = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'x')
			consx++;
		else {
			if (consx >= 3)
				ans += (consx - 2);
			consx = 0;
		}
	}
	if (consx >= 3)
		ans += (consx - 2);
	cout << ans << endl;
}
