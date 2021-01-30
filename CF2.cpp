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
		string s;
		cin>>s;
		ll n=s.length();
		char prev=s[n-1];
		ll i=0;
		while(i>=0){
		if(prev=='0'){
			if(s[n-1-i]=='1')
			break;
			i++;
		}
		else{
			if(s[n-1-i]=='0')
			prev='0';
			i++;
		}}
		cout<<n-i-1<<endl;
	}
}
