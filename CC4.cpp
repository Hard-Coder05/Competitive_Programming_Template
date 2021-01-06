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
ll printPairs(vector<ll> arr)
{   ll n=arr.size();
    vector<ll> v;
    unordered_map<int, bool> cnt;
    for (ll i = 0; i < n; i++) {
        if (cnt[abs(arr[i])] == 0)
            cnt[abs(arr[i])] = 1;
        else {
            v.push_back(abs(arr[i]));
            cnt[abs(arr[i])] = 0;
        }
    }
        return v.size();
}
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
ll countFreq(vector<ll> arr) 
{   ll n=arr.size();
    unordered_map<ll, ll> mp; 
    for (ll i = 0; i < n; i++) 
        mp[arr[i]]++;  
    ll ans=0;
    for (ll i = 0; i < n; i++) { 
      if (mp[arr[i]] > 1) 
      { 
          ans++;
          mp[arr[i]] = -1; 
      } 
    } 
    return ans;
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
        vector<ll> arr;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            vector<ll> curr;
            for(ll j=0;j<m;j++){
                ll x;
                cin>>x;
                curr.push_back(x);
                arr.push_back(abs(x));
            }
            v.push_back(curr);
        }
        if(n==1)
        cout << count(v[0]) << endl;
        else{
            ll ans=0;
            for(ll i=0;i<n;i++){
                ans+=count(v[i]);
                ans-=printPairs(v[i]);
            }
                ans+=countFreq(arr);
                cout<<ans<<endl;
        }
	}  
}
