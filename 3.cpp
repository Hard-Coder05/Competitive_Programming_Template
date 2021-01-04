/*
Problem Link: https://www.codechef.com/JAN21B/problems/WIPL
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
ll dp[4020][4020];
ll pref[4020];
ll sol(ll idx,ll taken,ll n,ll k,vector<ll> &arr){
    if(taken>=k && (pref[idx]-taken>=k)) return 0;
    else if(idx>=n)  return 1e10;
    else if(dp[idx][taken]!=-1) return dp[idx][taken];
    ll c1 = sol(idx+1,min(taken+arr[idx],pref[idx]-taken),n,k,arr);
    ll c2 = sol(idx+1,min(pref[idx]-taken+arr[idx],taken),n,k,arr);
    return dp[idx][taken] = 1+min(c1,c2);
}
ll solution(vector<ll> &arr,ll n,ll k){
    for(long long int i=0;i<n/2;i++) swap(arr[i],arr[n-i-1]);
    for(long long int i=0;i<=n+10;i++){
        pref[i]=0;
        for(long long int j=0;j<=k+10;j++) dp[i][j]=-1;
    }
    for(long long int i=1;i<=n;i++) pref[i]=pref[i-1]+arr[i-1];
    ll ans = sol(0,0,n,k,arr);
    return ans>1e9?-1:ans;
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
		ll n,k;
		cin >> n>>k;
        vector<ll> arr(n,0);
		for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        if(n==1)
        cout<<"-1"<<endl;
        else
        cout<<solution(arr,n,k)<<endl;
	}
}