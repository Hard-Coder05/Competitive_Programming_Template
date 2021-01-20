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
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	map<string,int> mp;
	while (tc--) {
		int n,l; 
		cin>>n>>l;
		set<int> s;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		double maxm=0;
		int curr=0;
		for(auto i:s){
			maxm=max((double)(i-curr)/2,maxm);
			curr=i;
		}
		maxm=max(maxm,l-curr);
		maxm=max(maxm,*s.begin());
		cout<<fixed<<setprecision(10)<<maxm<<endl;
	}
}
