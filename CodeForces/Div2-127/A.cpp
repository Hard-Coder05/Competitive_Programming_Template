/*
Problem Link: https://codeforces.com/problemset/problem/202/A
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
	string s;
	cin >> s;
	int n = s.length();
	char arr[n];
	for (int i = 0; i < n; i++)
		arr[i] = s[i];
	sort(arr, arr + n);
	char a = arr[n - 1];
	for (int i = n - 1; i >= 0; i--) {
		if (a == s[i])
			cout << s[i];
	}
}
