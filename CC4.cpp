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
ll count(vector<ll> s)
{   ll N, i, neg = 0, pos = 0;
    N = s.size();
    for (i = 0; i < N; i++) {
        if (s[i] <0)
            neg++;
        if (s[i] >0)
            pos++;
    }
    return neg*pos;
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
        vector<vector<ll>> v;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            vector<ll> curr;
            for(int j=0;j<m;j++){
                ll x;
                cin>>x;
                curr.push_back(x);
            }
            v.push_back(curr);
        }
        if(n==1)
        cout << count(v[0]) << endl;
        else{
            ll ans=0;
            for(ll i=0;i<n;i++){
                ans+=count(v[i]);
                
            }
        }
	}  
}
