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
ull PowMod(ull n)
{
	ull ret = 1;
	ull a = 2;
	while (n > 0) {
		if (n & 1) ret = ret * a % MOD;
		a = a * a % MOD;
		n >>= 1;
	}
	return ret;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll tc;
	cin >> tc;
	while (tc--) {
		ll n;
		ll s;
		cin >> n >> s;
		if (n == 1 && s % 2 == 0)
			cout << 1 << endl;
		else if (n == 1)
			cout << 0 << endl;
		else if (n & 1) {
			set<int> odd;
			set<int> eve;
			while (s > 0) {
				eve.insert(s % 10);
				s = s / 10;
				if (s > 0)
					odd.insert(s % 100);
				s = s / 10;
			}
			if (*odd.begin() % 2 == 0 && *eve.begin() % 2 == 0)
				cout << 2 << endl;
			else
				cout << 1 << endl;
		}
		else {
			set<int> odd;
			set<int> eve;
			while (s > 0) {
				eve.insert(s % 10);
				s = s / 10;
				odd.insert(s % 100);
				s = s / 10;
			}
			if (*odd.begin() % 2 == 0 && *eve.begin() % 2 == 0)
				cout << 2 << endl;
			else
				cout << 1 << endl;
		}
	}
}