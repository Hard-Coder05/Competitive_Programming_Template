/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
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
		cin >> n;
		ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        ll max=0;
        for(ll i=0;i<n;i++){
            if(arr[i]==0)
            continue;
            ll curri=i;
            ll currmax=0;
            while(curri<n){
            if(arr[curri]==0)
            continue;
            ll now=arr[curri];
            arr[curri]=0;
            currmax+=now;
            curri+=now;
            }
            if(max<currmax)
            max=currmax;
        }
        cout<<max<<endl;
	}
}
