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
        ll d1,v1,d2,v2,p;
        cin >> d1>>v1>>d2>>v2>>p;
        ll ans=0,mark=0,sum=0;
        if(d1>d2){
        ans += (d2-1);
        while(sum<p){
            ans++;
            sum+=v2;
            if(mark==1||d1==d2){
                sum+=v1;
                mark=1;
            }
            d2++;
        }
        cout<<ans;
        }
        else {
        ans += (d1-1);
        while(sum<p){
            ans++;
            sum+=v1;
            if(mark==1||d1==d2){
                sum+=v2;
                mark=1;
            }
            d1++;
        }
        cout<<ans;
        }
    }