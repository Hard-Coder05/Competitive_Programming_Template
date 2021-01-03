/*
Problem Link: https://www.codechef.com/JAN21B/problems/FAIRELCT
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
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll tc;
	cin >> tc;
	while (tc--) {
		ll n,m;
		cin >> n>>m;
        int a[n],b[m];
        int suma=0,sumb=0;  
		for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a[i]=x;
            suma+=x;
        }
        for(int i=0;i<m;i++){
            ll x;
            cin>>x;
            b[i]=x;
            sumb+=x;
        }
        int diff = suma-sumb;
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        int mi=0,ni=0,ans=0;
        while(diff<=0&&(mi<m&&ni<n)){
            if(a[ni]<b[mi]){
                diff+=2*(b[mi]-a[ni]);
                ans++;
                mi++;
                ni++;
            }
            else
            {
                break;
            }
        }
        if(diff<=0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
	}
}
