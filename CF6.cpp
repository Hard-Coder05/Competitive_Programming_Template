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
		ll arr[5][5];
        ll ai=0,aj=0;
		for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                ai=i;
                aj=j;
            }}
        }
        cout<<abs(2-ai)+abs(2-aj)<<endl;
	}
