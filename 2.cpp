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
	ll n;
	cin >> n;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	vector<ll> ans;
	if (n & 1 == 0) {
		for (int i = 0; i < n / 2; i++) {
			ans.push_back(v[n - (i + 1)]);
			ans.push_back(v[i]);
		}
	}
	else {
		for (int i = 0; i < n / 2; i++) {
			ans.push_back(v[n - (i + 1)]);
			ans.push_back(v[i]);
		}
		ans.push_back(v[n / 2 ]);
	}
	cout << n / 2 << endl;
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}

