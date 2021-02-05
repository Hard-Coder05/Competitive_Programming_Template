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
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0;i<n;i++)
		cin>>arr[i];
		while(k-1){
			ll i=0;
			while(i<n-1){
				if(arr[i]<arr[i+1]){
				arr[i]++;
				break;
				}
				else{
					i++;
				}
			}
			k--;
		}
		ll i=0;
		bool ans=true;
		while(i<n-1){
				if(arr[i]<arr[i+1]){
				arr[i]++;
				ans=false;
				cout<<i+1<<endl;
				break;
				}
				else{
					i++;
				}
		}
		if(ans)
		cout<<-1<<endl;
	}
}
