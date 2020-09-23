/*
Problem Link:
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
		ll x;
		cin >> x;
		if (x == 1) {
			cout << 1 << endl;
			return 0;
		}
		if (x == 3) {
			cout << 5 << endl;
			return 0;
		}
		int i = 0;
		for (; i <= 100; i++) {
			if (i & 1) {
				if (x <= i + (((i - 2) / 2) + 1) * (((i - 2) / 2) + 1) * 2) {
					cout << i << endl;
					break;
				}
			}
			else {
				if (x <= i + (i - 2) * (i - 2) / 2) {
					cout << i << endl;
					break;
				}
			}
		}
	}
}
