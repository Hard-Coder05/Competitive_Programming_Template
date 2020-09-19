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
void add_edge(int i, int j, float t, map<int, list<pair<int, float>>> &s) {
	s[i].push_back(make_pair(j, t));
	s[j].push_back(make_pair(i, t));
}
bool fun2(map<int, list<pair<int, float>>>& m, int a, int b)
{	int k = 0;
	for (auto i : m[b]) {
		if (i.first == a && i.second == -1) {
			k = 1;
			break;
		}
		else {
			k = 0;
		}
	}
	return k;
}
void fun1(int a, float t, map<int, list<pair<int, float>>> &s, map<int, int> &b, int w ) {
	for (auto i : s[a]) {
		if (i.first != w && fun2(s, i.first, w)) {
			if (i.second == -1) {
				continue;
			}
			else {
				if (i.second > t ) {
					if (b[i.first] == 0) {
						b[i.first] = 1;
					}
				}
				else {
					continue;
				}
			}
		}

	}
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int N, k, m;
		float t;
		cin >> N;
		map<int, list<pair<int, float>>> s;
		map<int, int> visited;
		map<int, int> infection_tracker;
		int arr[N + 1];
		for (int i = 1; i <= N; i++) {
			cin >> arr[i];
			visited.insert({i, 0});
			infection_tracker.insert({i, 0});
		}
		for (int i = 1; i < N + 1; i++) {
			for (int j = 1; j < N + 1; j++) {
				k = i - j;
				m = arr[j] - arr[i];
				if (i != j && m != 0 && visited[j] == 0) {
					t = float(k) / m;
					if (t > 0) {
						add_edge(i, j, t, s);
					}
					else {
						add_edge(i, j, -1, s);
					}
				}
				if (i != j && m == 0 && visited[j] == 0) {
					add_edge(i, j, -1, s);
				}
			}
			visited[i] = 1;
		}
		int infected_or_not, host;
		vector<int> bestOrWorst_list;
		for (auto i : s) {
			host = i.first;
			infection_tracker[host] = 1;
			for (auto j : i.second) {
				infected_or_not = j.first;
				if (j.second == -1) {
					continue;
				}
				else {
					infection_tracker[j.first] = 1;
					fun1(infected_or_not, j.second, s, infection_tracker, host);
				}
			}
			int sum = 0;
			for (auto z : infection_tracker) {
				sum = sum + z.second;
			}
			bestOrWorst_list.push_back(sum);
			for (int i = 1; i <= N; i++) {
				infection_tracker[i] = 0;
			}

		}
		int p, q;
		p = *max_element(bestOrWorst_list.begin(), bestOrWorst_list.end());
		q = *min_element(bestOrWorst_list.begin(), bestOrWorst_list.end());
		cout << q << " " << p << endl;
	}
	return 0;
}
