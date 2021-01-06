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
		set<ll> s;
		ll p; cin>>p;
		for(ll i=0;i<p;i++){
			ll x;
			cin>>x;
			s.insert(x);
		}
		ll q; cin>>q;
		for(ll i=0;i<q;i++){
			ll x;
			cin>>x;
			s.insert(x);
		}
		ll i=1;
		for (auto itr = s.begin();itr != s.end(); ++itr) 
		{
			if(*itr!=i){
				cout<<"Oh, my keyboard!";
				return 1;
			}
			else
			{
				i++;
			}
			
		}
		cout<<"I become the guy.";
		
	}