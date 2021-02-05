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
		ll x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		ll u=0,d=0,l=0,r=0;
		for(ll i=0;i<s.length();i++){
			if(s[i]=='U')
			u++;
			else if(s[i]=='D')
			d++;
			else if(s[i]=='L')
			l++;
			else
			r++;
		}
		bool ans=true;
		if(x<0){
			if(l<abs(x))
			ans=false;
		}
		else{
			if(r<x)
			ans=false;
		}
		if(y<0){
			if(d<abs(y))
			ans=false;
		}
		else{
			if(u<y)
			ans=false;
		}
		if(ans)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
