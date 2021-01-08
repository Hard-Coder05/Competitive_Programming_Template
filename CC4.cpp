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
        vector<vector<ll>> neg;
        vector<vector<ll>> pos;
        map<ll,ll> arr;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            vector<ll> curr1,curr2;
            for(ll j=0;j<m;j++){
                ll x;
                cin>>x;
                if(x<0)
                curr1.push_back(x);
                else
                    curr2.push_back(x);
                arr[abs(x)]++;
            }
            sort(curr1.begin(),curr1.end());
            sort(curr2.begin(),curr2.end());
            pos.push_back(curr2);
            neg.push_back(curr1);
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll negcount=0;
            vector<ll> currneg=neg[i];
            ll currnegsize=currneg.size();
            for(ll a=0;a<currnegsize;a++){
                if(arr[abs(currneg[a])]>1)
                ans+=currnegsize-a-1;
                else negcount++;
            }
            ll poscount=0;
            vector<ll> currpos=pos[i];
            ll currpossize=currpos.size();
            for(ll a=0;a<currpossize;a++){
                if(arr[abs(currpos[a])]>1)
                ans+=currpossize-a-1;
                else poscount++;
            }
            ans+=negcount*currpossize+poscount*currnegsize;
        }
        for (auto i:arr) { 
        if (i.second > 1) 
        { 
            ans++;
        }}
    cout<<ans<<endl; 
	}  
}
