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
bool isDigitPresent(ll x, ll d) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
        x = x / 10; 
    } 
    return (x > 0); 
}
bool calc(ll n,ll d){
while(n>=0){
	if(isDigitPresent(n,d))
	return true;
	n-=d;
}
return false;
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
		ll q,d;
		cin>>q>>d;
		for(int i=0;i<q;i++){
			ll x;
			cin>>x;
			if(calc(x,d))
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
}
