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
#define ull unsigned long long
#define MOD 1000000007
#define INF 1000000000000000003
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
ll count(vector<ll> s)
{
    ll N, i, cnt = 0, ans = 0;
    N = s.size();
 
    for (i = 0; i < N; i++) {
        if (s[i] <0)
            cnt++;
        if (s[i] >0)
            ans += cnt;
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
	}
}
