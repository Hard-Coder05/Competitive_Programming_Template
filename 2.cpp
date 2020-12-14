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
        ll a,b;
        cin>>a>>b;
        if(a%2==0&&b%2==0){
            cout<<(a/2)*(b/2)*2<<endl;
        }
        else if(a%2==0&&b%2!=0){
            cout<<(a/2)*(b/2)+(a/2)*((b/2)+1)<<endl;
        }
        else if(a%2!=0&&b%2==0){
            cout<<(a/2)*(b/2)+((a/2)+1)*(b/2)<<endl;
        }
        else{
            cout<<(a/2)*(b/2)+((a/2)+1)*((b/2)+1)<<endl;
        }
    }
}
