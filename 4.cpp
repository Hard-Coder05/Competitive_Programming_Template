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
        ll n,k,sum=0,diff,m=0;
        cin>>n>>k;
        ll arr[n];
        if(n%2==0){
        for(ll i=1;i<=n;i++){
            if(i%2==0){
                arr[i-1]=i;
                m++;
            }
            else{
                arr[i-1]=-i;
            }
        }
    }
    else{
        for(ll i=1;i<=n;i++){
            if(i%2==0){
                arr[i-1]=-i;
            }
            else{
                arr[i-1]=i;
                m++;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>0){
            if(m<k){
                diff=k-m;
                for(int l=0;l<n;l++){
                    if(arr[n-1-l]<0){
                        arr[n-1-l]=(n-1);
                        diff--;
                        m++;
                    }
                    if(diff==0)
                    break;
                }
            }
            else if(m>k){
                diff=m-k;
                for(int l=0;l<n;l++){
                    if(arr[n-1-l]>0){
                        arr[n-1-l]=-1*(n-1);
                        diff--;
                        m--;
                    }
                    if(diff==0)
                    break;
                }
            }
            else
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    }
}
