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
typedef long long int ll;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
		ll n;
		cin >> n;
		unordered_map<ll,ll> home,guest;
		for(ll i=0;i<n;i++){
			ll x,y;
			cin>>x>>y;
			home[x]++;
			guest[y]++;
		}
		ll ans=0;
		for(auto i:home){
			auto curr=guest.find(i.first);
			if(curr!=guest.end())
			ans+=i.second*curr->second;
		}
		cout<<ans<<endl;
	}
