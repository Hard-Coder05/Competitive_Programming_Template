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
typedef long long int ll;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
		ll n;
        cin>>n;
        ll sum=0,arr[n];
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            arr[i]=x;
        }
        int i=0;
        sort(arr,arr+n,greater<int>());
        ll have=0;
        ll ans=0;
        while(have<=sum&&i<n){
            have+=arr[i];
            sum-=arr[i];
            ans++;
            i++;
        }
        cout<<ans<<endl;
	}

