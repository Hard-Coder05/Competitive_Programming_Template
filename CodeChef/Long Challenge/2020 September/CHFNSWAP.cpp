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
ll fun(ll n)
{
	long double d = sqrt(1ul + 4 * (n));
	d = d - 1.0;
	d = d / 2.0;
	ll ans = d;
	return ans;
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
		ll sum = (n * (n + 1) / 2);
		if (n == 0 || n == 1 || n == 2)
			cout << 0 << endl;
		else if (sum % 2 != 0)
			cout << 0 << endl;
		else {
			ll i = fun(sum);
			ll d = i * (i + 1) / 2;
			if (sum / 2 == d) {
				ll ans = (i * (i - 1ul)) / 2l + ((n - i) * (n - i - 1ul)) / 2l + (n - i);
				cout << ans << endl;
			}
			else {
				cout << n - i << endl;
			}

		}
	}
}
