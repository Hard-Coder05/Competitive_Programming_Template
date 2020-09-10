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
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		ll comp = v[n - 1];
		ll ans = 0;
		for (int i = n - 2; i >= 0; i--) {
			if (v[i] == 0)
				break;
			if (v[i] != comp) {
				ans++;
				ll comp = v[i];
			}
		}
		if (v[0] == 0)
			cout << ans << endl;
		else
			cout << ++ans << endl;
	}
}
