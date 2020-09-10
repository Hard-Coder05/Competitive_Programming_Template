#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
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
		ll arr[n][n];
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		ll ans = 0;
		for (ll i = n - 1; i > 0; i--) {
			if (arr[0][i] != i + 1 && ans % 2 == 0)
				ans++;
			else if (arr[0][i] == i + 1 && ans % 2 == 0)
				continue;
			else if (arr[0][i] == i + 1 && ans % 2 == 1)
				ans++;
			else if (arr[0][i] != i + 1 && ans % 2 == 1)
				continue;
		}
		cout << ans << endl;
	}
}