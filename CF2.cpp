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
typedef long long ll;
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
		double k;
		cin>>n>>k;
		k/=100;
		ll sum;
		cin>>sum;
		ll change=0;
		for(ll i=1;i<n;i++){
			ll curr;
			cin>>curr;
			double p=(double)curr/sum;
			if(p<=k){}
			else{
				double now=(double)curr/k;
				now=ceil(now);
				now-=sum;
				change+=now;
				sum+=(ll)now;
			}
			sum+=curr;
		}
		cout<<change<<endl;
	}
}
