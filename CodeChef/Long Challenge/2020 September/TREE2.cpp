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
int countDistinct(int arr[], int n)
{
	int res = 1;
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
			res++;
	}
	return res;
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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		ll ans = countDistinct(arr[], n);
		if (v[0] == 0)
			cout << ans - 1 << endl;
		else
			cout << ans << endl;
	}
}
