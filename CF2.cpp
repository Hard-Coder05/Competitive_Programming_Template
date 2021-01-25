/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
#define endl "\n"
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define MOD 1000000007
#define INF 1000000000000000003
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
vector<int> v;
void calc(int n){
int i, j, flag;
		for (i = 2; i <= n; i++) {
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            v.push_back(i);
    }
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	vector<int> t;
	int max=0;
	while (tc--) {
		int n;
		cin>>n;
		if(n>max)
		max=n;
		t.push_back(n);
	}
	calc(max);
	for(auto i:t){
		int count=0;
		for(int a=1;a<v.size();a++){
		if(v[a]>i)
		break;
		if(v[a]-v[a-1]==2)
		count++;
	}
	cout<<count<<endl;
	}
	}