/*
Problem Link:
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <iterator>
#include <string>
#include <bits/stdc++.h>
#define endl "\n"
#define ull unsigned long long
#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main() {
    FIO;
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n,d,a=0,b=0,ans=0;
        cin>>n>>d;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>=80||x<=9)
            a++;
            else
            b++;
        }
        ans+=a/d;
        ans+=b/d;
        a=a%d;
        b=b%d;
        if(a>0)
        ans++;
        if(b>0)
        ans++;
        cout<<ans<<endl;
    }
}