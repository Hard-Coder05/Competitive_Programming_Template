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
ll getMaxLength(vector<ll> arr) 
{ ll n=arr.size();
    ll count = 0;
    ll result = 0;  
    for (ll i = 0; i < n; i++) 
    { 
        if (arr[i] == 0) 
            count = 0; 
        else
        { 
            count++;
            result = max(result, count); 
        } 
    } 
    return result; 
} 
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
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n>2){
			vector<ll> v;
			for(ll i=1;i<n-1;i++){
				if((arr[i]>arr[i+1]&&arr[i]>arr[i-1])||(arr[i]<arr[i+1]&&arr[i]<arr[i-1]))
				v.push_back(1);
				else
				v.push_back(0);
			}
			ll ans=0;
			for(auto i:v)
			ans+=i;
			ll count=getMaxLength(v);
			if(count>=3)
			ans-=3;
			else
			ans-=count;
			cout<<ans<<endl;
		}
		else
			cout<<0<<endl;
		
	}
}
