/*
Problem Link: https://codeforces.com/contest/978/problem/A
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
	ll n;
	cin >> n;
	vector<int> ans;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		bool a = false;
		ll curr = arr[i];
		for (int j = 0; j < ans.size(); j++) {
			if (curr == ans[j])
				a = true;
		}
		if (a == false)
			ans.push_back(curr);
	}
	cout << ans.size() << endl;
	for (int j = ans.size() - 1; j >= 0; j--) {
		cout << ans[j] << " ";
	}
}