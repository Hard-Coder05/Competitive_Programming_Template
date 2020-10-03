/*
Problem Link: https://www.codechef.com/OCT20B/problems/CVDRUN
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
	ll tc;
	cin >> tc;
	while (tc--) {
		ll n, k, x, y;
		cin >> n >> k >> x >> y;
		if (n % k != 0) {
			cout << "YES" << endl;
		}
		else {
			bool a = false;
			ll b = (x + k) % n;
			while (b != x) {
				if (b == y) {
					a = true;
					break;
				}
				b = (b + k) % n;
			}
			if (a)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}
