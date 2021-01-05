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
        vector<int> num;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            num.push_back(x);            
        }
        sort(num.begin(),num.end(),greater<int>());
        int sumeve=0,sumodd=0;
        int size=num.size();
        for(int i=0;i<size;i++){
            if(!(num[i]&1))
            sumeve+=num[i];
            i++;
            if(i<size&&num[i]&1)
            sumodd+=num[i];
        }
        if(sumeve>sumodd)
        cout<<"ALICE"<<endl;
        else if(sumeve==sumodd)
        cout<<"TIE"<<endl;
        else
            cout<<"BOB"<<endl;
        
	}
}
